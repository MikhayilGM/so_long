/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessibility.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:09:54 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/19 21:29:59 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**find_player(char **strs)
{
	int	i;

	i = 0 
	while(strs && *strs)
	{
		while((*strs)[i])
		{
			if((*strs)[i] == 'P')
			{
				return (strs + i);
			}
		}
	}
}

static void	path_finder()
{
	
}

void accessablity(char **strs, int coins)
{
	int	player;
	int exit;

			
} 