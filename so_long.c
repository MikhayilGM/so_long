/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:04:48 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 22:17:16 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char	**argv)
{	
	t_game game;
	t_images imgs;
	
	if(argc == 2)
	{	
		game.map = open_and_push(argv[1]);
		trim_map(game.map);
		validation(game.map);
		game.mlx = mlx_init();
		game.window = mlx_new_window(game.mlx, ft_strlen(game.map[0])*32, 
			map_height(game.map)*32, "so_long");
		push_images(&game, &imgs);
		create_map(&game, &imgs);
		mlx_loop(game.mlx);
	}
	else
	{
		ft_putstr_fd("Error\nYou had to Enter 1 argument to Executable File(./so_long (MAP_FILENAME)).\n", 2);
		exit(1);
	}
}
