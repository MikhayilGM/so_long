/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:49:56 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/18 21:34:54 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	only_ones(char	*str)
{
	while(*str)
	{
		if(*str != '1')
			return (0);
		++str;
	}
	return (1);
}

int	is_surrounded_by1(char **strs)
{
	int	i;

	i = 1;
	if(!(strs) || !(strs[0]) || !only_ones(strs[0]) || ft_strlen_spc(strs[0]) < 2)
		return (0);
	while(strs[i])
	{
		printf("i:%d %d \"%s\":%d \"%s\"\n", i, ft_strlen_spc(strs[i]),strs[i],ft_strlen_spc(strs[i - 1]),strs[i - 1]);
		if (strs[i][0] != '1' || strs[i][ft_strlen_spc(strs[i] - 1)] != '1' 
			|| ft_strlen_spc(strs[i]) != ft_strlen_spc(strs[i - 1]))
			return (0);
		++i;
	}
	if(i < 2 || !only_ones(strs[i - 1]) )
		return (0);
	return (1);
}

void adder(char	sym, int *pc, int *cc, int *ec)
{
	if(sym == 'P')
		++(*pc);
	else if(sym == 'C')
		++(*cc);
	else if(sym == 'E')
		++(*ec);
	else if(sym != '1' && sym != '0' && sym != ' ')
		error();
}

int	token_counter(char	**strs)
{
	int	i;
	int	j;
	int	player_counter;
	int	coin_counter;
	int	exit_counter;
	
	j = 0;
	i = 1;
	player_counter = 0;
	coin_counter = 0;
	exit_counter = 0;
	while(strs[i])
	{
		while(strs[i][j])
		{
			adder(strs[i][j], &player_counter, &coin_counter, &exit_counter);
			++j;
		}
		j = 0;
		++i;
	}
	if (player_counter != 1 || exit_counter != 1 || coin_counter == 0)
		return (0);
	return (1);
}

int	validation(char **strs)
{
	if(is_surrounded_by1(strs) && token_counter(strs))
		return (1);
	return (0);
}