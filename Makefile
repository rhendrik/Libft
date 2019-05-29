FLAG = -Wall -Werror -Wextra
OPTION = -c -I ./libft.h
HEADER = libft.h
NAME = libft.a

.PHONY = clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) ft_*
	ar rc $(NAME) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
