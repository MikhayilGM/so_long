/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:26:29 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 19:12:56 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	wrong_map(void)
{
	ft_putstr_fd("Error\nYour Map is in Wrong Format.\n", 2);
	exit(1);
}

void no_hero(void)
{
	ft_putstr_fd("Error\nThere must be one Hero.\n", 2);
	exit(1);
}

void no_exit(void)
{
	ft_putstr_fd("Error\nThere must be one Exit.\n", 2);
	exit(1);
}

void no_coins(void)
{
	ft_putstr_fd("Error\nThere is No Coins.\n", 2);
	exit(1);
}
