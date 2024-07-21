/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessibility.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:09:54 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 18:43:34 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	find_player(char **strs, int *i, int *j)
{
	int jl;

	jl = 0;
	while(strs && strs[*i])
	{
		while(*j < ft_strlen(strs[*i]))
		{
			if(strs[*i][*j] == 'P')
			{
				return ;
			}
			++(*j);
		}
		*j = 0;
		++(*i);
	}
}

static void	path_finder_recursive(char **strs, int i, int j, int *cc, int *ec)
{
	if(strs[i][j] == 'E')
	{
		--(*ec);
		strs[i][j] = 'R';
		return ;
	}
	else if(strs[i][j] == 'C')
	{
		--(*cc);
		strs[i][j] = 'M';
	}
	if(strs[i][j] == '0')
		strs[i][j] = 'G';
	if(strs[i + 1][j] == '0' || strs[i + 1][j] == 'C' || strs[i + 1][j] == 'E')
		path_finder_recursive(strs, i + 1, j, cc, ec);
	if(strs[i - 1][j] == '0' || strs[i - 1][j] == 'C' || strs[i - 1][j] == 'E')
		path_finder_recursive(strs, i - 1, j, cc, ec);
	if(strs[i][j + 1] == '0' || strs[i][j + 1] == 'C' || strs[i][j + 1] == 'E')
		path_finder_recursive(strs, i, j + 1, cc, ec);
	if(strs[i][j - 1] == '0' || strs[i][j - 1] == 'C' || strs[i][j - 1] == 'E')
		path_finder_recursive(strs, i, j - 1, cc, ec);
}

static void	path_finder(char **strs, int *cc, int *ec)
{
	int	i_start;
	int	j_start;

	i_start = 0;
	j_start = 0;
	find_player(strs, &i_start, &j_start);
	path_finder_recursive(strs, i_start, j_start, cc, ec);
}

void accessibility(char **strs, int coins)
{
	int ec;

	ec = 1;
	path_finder(strs, &coins, &ec);
	if (coins != 0)
	{
		ft_putstr_fd("Error\nThere is No Access to Every Coins.\n", 2);
		exit(1);
	}
	if (ec != 0)
	{
		ft_putstr_fd("Error\nThere is No Access to Exit.\n", 2);
		exit(1);
	}
} 
