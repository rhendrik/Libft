FLAG = -Wall -Werror -Wextra
OPTION = -c -I .
HEADER = libft.h
NAME = libft.a

.PHONY = clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) *.c
	ar rc $(NAME) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
