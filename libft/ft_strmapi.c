/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:56:46 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/07 19:12:36 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*m;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	m = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (m == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		m[i] = f(i, s[i]);
		++i;
	}
	m[i] = '\0';
	return (m);
}
