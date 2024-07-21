/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:01:19 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 22:16:59 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	push_images(t_game* game, t_images* imgs)
{
	imgs->hero = mlx_xpm_file_to_image(game->mlx, "images/hero.xpm", &imgs->i, &imgs->j);
	imgs->floor = mlx_xpm_file_to_image(game->mlx, "images/floor.xpm", &imgs->i, &imgs->j);
	imgs->wall = mlx_xpm_file_to_image(game->mlx, "images/wall.xpm", &imgs->i, &imgs->j);
	imgs->door = mlx_xpm_file_to_image(game->mlx, "images/door.xpm", &imgs->i, &imgs->j);
	imgs->coin = mlx_xpm_file_to_image(game->mlx, "images/coin.xpm", &imgs->i, &imgs->j);
}

void	draw_an_image(t_game *game, t_images* imgs)
{
	printf("%zu : %zu|%c|\n", game->i, game->j, game->map[game->i][game->j]);
	if(game->map[game->i][game->j] == '1')
		mlx_put_image_to_window(game->mlx, game->window, imgs->wall, 
		32 * game->j, 32 * game->i);
	else if(game->map[game->i][game->j] == 'G')
		mlx_put_image_to_window(game->mlx, game->window, imgs->floor, 
		32 * game->j, 32 * game->i);
	else if(game->map[game->i][game->j] == 'M')
		mlx_put_image_to_window(game->mlx, game->window, imgs->coin, 
		32 * game->j, 32 * game->i);
	else if(game->map[game->i][game->j] == 'R')
		mlx_put_image_to_window(game->mlx, game->window, imgs->door, 
		32 * game->j, 32 * game->i);
	else if(game->map[game->i][game->j] == 'P')
		mlx_put_image_to_window(game->mlx, game->window, imgs->hero, 
		32 * game->j, 32 * game->i);
}
