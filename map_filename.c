/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_filename.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:37:55 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 19:24:35 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	wrong_map_filename(void)
{
	ft_putstr_fd("Error\nYour entered Map Filename must be in *.ber format.\n", 2);
	exit(1);
}

static void file_do_not_exist(void)
{
	ft_putstr_fd("Error\nYour Entered File do not Exist.\n", 2);
	exit(1);
}

static void	ending(const char *str)
{
	int	i;
	int j;
	const char k[5] = ".ber";

	i = 0;
	j = 0;
	while(str && str[i])
	{
		if(str[i] == '.')
			break ;
		++i;
	}
	while(str && str[i] && k[j])
	{
		if(str[i] != k[j])
			wrong_map_filename();
		++i;
		++j;
	}
	if(str[i] != k[j])
		wrong_map_filename();
}

char	**open_and_push(char *filename)
{
	int		fd;
	char	*str;
	char	*str1;
	char	**strs;

	ending(filename);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		file_do_not_exist();
	str = get_next_line(fd);
	str1 = get_next_line(fd);
	while(str1)
	{
		str = ft_concat(str, str1);
		free(str1);
		str1 = get_next_line(fd);
	}
	ft_putstr_fd(str, 1);
	check_nl_between(str);
	strs = ft_split(str, '\n');
	free(str);
	return (strs);
}
	