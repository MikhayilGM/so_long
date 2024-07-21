/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:44:21 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 21:56:24 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	map_height(char	**strs)
{
	int	i;

	i = 0;
	while(strs[i])
	{
		++i;
	}
	return (i);
}
void	create_map(t_game *game, t_images *imgs)
{
	game->i = 0;
	while(game->map[game->i])
	{
		game->j = 0;
		while(game->map[game->i][game->j])
		{
			draw_an_image(game, imgs);
			++(game->j);
		}
		++(game->i);
	}	
}