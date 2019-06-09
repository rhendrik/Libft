FLAG = -Wall -Werror -Wextra
OPTION = -c -I .
HEADER = libft.h
NAME = libft.a

.PHONY = clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) ft_bzero.c    ft_isprint.c  ft_memset.c   ft_strcmp.c   ft_strncmp.c  ft_tolower.c ft_isalnum.c  ft_memccpy.c  ft_putchar.c  ft_strcpy.c   ft_strncpy.c  ft_toupper.c ft_isalpha.c  ft_memchr.c   ft_putstr.c   ft_strdup.c   ft_strnstr.c  islower.c ft_isascii.c  ft_memcpy.c   ft_strcat.c   ft_strlen.c   ft_strrchr.c  issame.c ft_isdigit.c  ft_memmove.c  ft_strchr.c   ft_strncat.c  isupper.c ft_strstr.c
	ar rc $(NAME) ft_bzero.o    ft_isprint.o  ft_memset.o   ft_strcmp.o   ft_strncmp.o  ft_tolower.o ft_isalnum.o  ft_memccpy.o  ft_putchar.o  ft_strcpy.o   ft_strncpy.o  ft_toupper.o ft_isalpha.o  ft_memchr.o   ft_putstr.o   ft_strdup.o   ft_strnstr.o  islower.o ft_isascii.o  ft_memcpy.o   ft_strcat.o   ft_strlen.o   ft_strrchr.o  issame.o ft_isdigit.o  ft_memmove.o  ft_strchr.o   ft_strncat.o  isupper.o ft_strstr.o

clean:
	rm -rf ft_bzero.o    ft_isprint.o  ft_memset.o   ft_strcmp.o   ft_strncmp.o  ft_tolower.o ft_isalnum.o  ft_memccpy.o  ft_putchar.o  ft_strcpy.o   ft_strncpy.o  ft_toupper.o ft_isalpha.o  ft_memchr.o   ft_putstr.o   ft_strdup.o   ft_strnstr.o  islower.o ft_isascii.o  ft_memcpy.o   ft_strcat.o   ft_strlen.o   ft_strrchr.o  issame.o ft_isdigit.o  ft_memmove.o  ft_strchr.o   ft_strncat.o  isupper.o ft_strstr.o


fclean: clean
	rm -rf $(NAME)

re: fclean all
