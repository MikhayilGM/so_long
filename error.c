/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:26:29 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/19 19:23:03 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	wrong_map(void)
{
	write(2, "Error\n", 6);
	write(2, "Your Map is in Wrong Format\n", 28);
	exit(1);
}

void no_hero(void)
{
	write(2, "Error\n", 6);
	write(2, "There is No Hero.\n", 17);
	exit(1);
}

void no_exit(void)
{
	write(2, "Error\n", 6);
	write(2, "There is No Exit.\n", 17);
	exit(1);
}

void no_coins(void)
{
	write(2, "Error\n", 6);
	write(2, "There is No Coins.\n", 18);
	exit(1);
}
