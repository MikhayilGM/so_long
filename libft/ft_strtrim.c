/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:43:22 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/07 19:12:57 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	x;
	size_t	y;
	char	*m;

	x = 0;
	y = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[x] && ft_strchr(set, s1[x]) != NULL)
		++x;
	y = ft_strlen(s1);
	while (y > x && ft_strchr(set, s1[y - 1]) != NULL)
		--y;
	m = ft_substr(s1, x, y - x);
	return (m);
}
