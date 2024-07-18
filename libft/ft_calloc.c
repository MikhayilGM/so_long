/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:53:25 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/07 19:11:11 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size != 0 && count * size >= SIZE_MAX / size)
		return (NULL);
	res = (void *)malloc(count * size);
	if (res == 0)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
