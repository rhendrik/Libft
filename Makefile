SRC = ./srcs/
FLAG = -Wall -Werror -Wextra
OPTION = -c -I
HEADER = ./heads/
OBJ = $(wildcard *.o)
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)$(wildcard *.c)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

compile: name clean
	gcc $(FLAG) -g $(wildcard *.c)
