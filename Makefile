CC = cc
CFLAGS = -Wextra -Werror -Wall# -g3 -fsanitize=address

SRC = get_next_line_utils.c get_next_line.c ft_putstr_fd.c ft_strjoin.c ft_memcpy.c so_long.c ft_split.c ft_substr.c validation.c ft_strlen_spc.c error.c
OBJ = $(SRC:.c=.o)
NAME = so_long

.PHONY = NAME all re clean fclean

all: $(NAME) $(SRC)

$(NAME) : $(OBJ) $(HEADER) Makefile
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean: 
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
