/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:55:15 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/18 17:19:11 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	count_words(char const *s, char x)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != x)
		{
			++count;
			while (*s && *s != x)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			res_count;
	char		**str;
	int			i;
	const char	*p_s;

	if (!s)
		return (NULL);
	res_count = count_words(s, c);
	str = (char **)malloc((res_count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < res_count)
	{
		while (*s == c)
			s++;
		p_s = s;
		while (*s && *s != c)
			s++;
		str[i] = ft_substr(p_s, 0, s - p_s);
		if (!str[i] && ft_split(*str, i))
			return (NULL);
	}
	str[i] = NULL;
	return (str);
}

int	free_split(char **str, int j)
{
	while (j-- > 0)
		free(str[j]);
	free(str);
	return (1);
}
