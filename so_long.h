/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:03:46 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/20 18:41:38 by mikhmart         ###   ########.fr       */
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
char	*ft_strtrim(const char *s1, const char *set);
void	trim_map(char **strs);
void	is_surrounded_by1(char **strs);
void	token_counter(char	**strs);
void	accessibility(char **strs, int coins);
void	validation(char **strs);
void	wrong_map(void);
void	no_hero(void);
void	no_exit(void);
void	no_coins(void);

#endif
