/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:54:33 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/07 19:11:33 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = len;
	d = (char *)dst;
	s = (const char *)src;
	if (!d && !s)
		return (NULL);
	if ((size_t)d > (size_t)s)
	{
		i = len - 1;
		while (i < len)
		{
			d[i] = s[i];
			--i;
		}
		return (d);
	}
	i = -1;
	while (++i < len)
		d[i] = s[i];
	return (d);
}
