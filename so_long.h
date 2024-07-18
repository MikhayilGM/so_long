/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:03:46 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/18 21:26:49 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO___LONG
# define SO___LONG

# include "get_next_line.h"

void	ft_putstr_fd(char *s, int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_concat(char *s1, char const *s2);
int		ft_strlen_spc(const char *str);
int		validation(char **strs);
void	error(void);

#endif
