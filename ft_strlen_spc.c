/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_spc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:54:54 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/18 21:43:44 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen_spc(const char *str)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	printf("%s\n", str);
	while (str && str[a] != '\0')
	{
		if(str[a] == ' ')
		{
			while (str[a + i])
			{
				printf("\"%c\" : %d\n", str[a + i], a + i);
				if(str[a + i] != ' ')
					return (-1);
				++i;
			}
			break;
		}	
		a++;
	}
	return (a);
}
