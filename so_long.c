/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:04:48 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/18 21:15:17 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main()
{
	int		fd;
	char	*str;
	char	*str1;
	char	**strs;

	fd = open("map.ber", O_RDONLY);
	str = get_next_line(fd);
	str1 = get_next_line(fd);
	while(str1)
	{
		str = ft_concat(str, str1);
		str1 = get_next_line(fd);
	}
	ft_putstr_fd(str, 1);
	strs = ft_split(str, '\n');
	printf("map start______\n");
	if(validation(strs))
		printf("Lav a\n");
	else
		printf("Lav chi\n");
	printf("map end______\n");
}
