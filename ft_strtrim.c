/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:43:22 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 18:18:10 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strtrim(char *s1, const char *set)
{
	size_t	y;
	char	*m;

	y = 0;
	if (s1 == NULL)
		return (NULL);
	y = ft_strlen(s1);
	while (y > 0 && ft_strchr(set, s1[y - 1]) != NULL)
		--y;
	m = ft_substr(s1, 0, y);
	free(s1);
	return (m);
}

void	trim_map(char **strs)
{
	while(strs && *strs)
	{
		*strs = ft_strtrim(*strs, " \t");
		++strs;		
	}
}