/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_counter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:27:03 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/19 21:27:23 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void adder(char	sym, int *pc, int *cc, int *ec)
{
	if(sym == 'P')
		++(*pc);
	else if(sym == 'C')
		++(*cc);
	else if(sym == 'E')
		++(*ec);
	else if(sym != '1' && sym != '0')
		wrong_map();
}

void	token_validation(int *pc, int *cc, int *ec)
{
	if(*pc != 1)
		no_hero();
	else if(*cc < 1)
		no_coins();
	else if(*ec != 1)
		no_exit();
}

void	token_counter(char	**strs)
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
	token_validation(&player_counter, &coin_counter, &exit_counter);
}
