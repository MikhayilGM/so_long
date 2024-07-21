CC = cc
CFLAGS = -Wextra -Werror -Wall #-g3 -fsanitize=address

MLX_PATH = mlx/

MLX_LIB = $(MLX_PATH)libmlx.a

MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit

SRC = get_next_line_utils.c get_next_line.c ft_putstr_fd.c ft_strjoin.c ft_memcpy.c so_long.c ft_split.c ft_substr.c validation.c error.c token_counter.c ft_strtrim.c accessibility.c map_filename.c fill_map.c push_images.c

OBJ = $(SRC:.c=.o)

NAME = so_long

.PHONY = NAME all re clean fclean

all: $(NAME) $(SRC)

$(NAME) : $(OBJ) $(HEADER) Makefile
	@make -C $(MLX_PATH) all
	$(CC) $(CFLAGS) $(MLX_FLAGS) $(OBJ) $(MLX_LIB)  -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean: 
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
