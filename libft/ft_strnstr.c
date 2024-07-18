/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:57:06 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/07 19:12:47 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;
	size_t	j;

	nlen = ft_strlen(needle);
	i = 0;
	j = 0;
	if (nlen == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < nlen && i + j < len && haystack[i + j] == needle[j])
				++j;
		}
		if (j == nlen)
			return ((char *)&haystack[i]);
		++i;
	}
	return (NULL);
}
