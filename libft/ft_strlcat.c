/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:56:17 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/07 19:12:18 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (!dst && dstsize == 0)
		return (0);
	len_dst = (size_t)ft_strlen(dst);
	len_src = (size_t)ft_strlen(src);
	if (dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && (len_dst + i) < (dstsize - 1))
	{
		dst[len_dst + i] = src[i];
		++i;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
