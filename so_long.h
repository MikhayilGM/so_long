/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:03:46 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/21 21:58:19 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO___LONG
# define SO___LONG

# include "get_next_line.h"
# include "mlx.h"

typedef struct s_game
{
	void	*mlx;
	void	*window;
	int		coins;
	size_t	step_counter;
	char	**map;
	size_t	i;
	size_t	j;
}	t_game;

typedef struct	s_player_pos
{
	int x;
	int y;
}	t_player_pos;

typedef struct	s_images
{
	void	*hero;
	void	*floor;
	void	*wall;
	void	*door;
	void	*coin;
	int		i;
	int		j;
}	t_images;

void	ft_putstr_fd(char *s, int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_concat(char *s1, char const *s2);
char	*ft_strtrim(char *s1, const char *set);
void	trim_map(char **strs);
int		map_height(char	**strs);
void	create_map(t_game *game, t_images *imgs);
void	push_images(t_game* game, t_images* imgs);
void	draw_an_image(t_game *game, t_images* imgs);
void	check_nl_between(char *str);
char	**open_and_push(char *filename);
void	is_surrounded_by1(char **strs);
void	token_counter(char	**strs);
void	accessibility(char **strs, int coins);
void	validation(char **strs);
void	wrong_map(void);
void	no_hero(void);
void	no_exit(void);
void	no_coins(void);

#endif
