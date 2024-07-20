/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:49:56 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/20 18:58:38 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	only_ones(char	*str)
{
	while(*str)
	{
		if(*str != '1')
			return (0);
		++str;
	}
	return (1);
}

void	is_surrounded_by1(char **strs)
{
	int	i;

	i = 1;
	if(!(strs) || !(strs[0]) || !only_ones(strs[0]) || ft_strlen(strs[0]) < 2)
		wrong_map();
	while(strs[i])
	{
		if (strs[i][0] != '1' || strs[i][ft_strlen(strs[i]) - 1] != '1' 
			|| ft_strlen(strs[i]) != ft_strlen(strs[i - 1]))
			wrong_map();
		++i;
	}
	if(i < 2 || !only_ones(strs[i - 1]) )
	{
		wrong_map();
	}
}

void	validation(char **strs)
{
	is_surrounded_by1(strs);
	token_counter(strs);
}
