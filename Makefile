SRC = *.c
FLAG = -Wall -Werror -Wextra
OPTION = -c
HEADER = ./heads/mhead.h
OBJ = *.o
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
