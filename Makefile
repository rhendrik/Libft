FLAG = -Wall -Werror -Wextra
OPTION = -c -I .
HEADER = libft.h
NAME = libft.a

.PHONY = clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) ft_bzero.c    ft_isprint.c  ft_memset.c   ft_strcmp.c   ft_strncmp.c  ft_tolower.c ft_isalnum.c  ft_memccpy.c  ft_putchar.c  ft_strcpy.c   ft_strncpy.c  ft_toupper.c ft_isalpha.c  ft_memchr.c   ft_putstr.c   ft_strdup.c   ft_strnstr.c  islower.c ft_isascii.c  ft_memcpy.c   ft_strcat.c   ft_strlen.c   ft_strrchr.c  issame.c ft_isdigit.c  ft_memmove.c  ft_strchr.c   ft_strncat.c  isupper.c ft_strstr.c ft_memcmp.c ft_atoi.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strsplit.c ft_strlcat.c ft_memrcpy.c 
	ar rc $(NAME) ft_bzero.o    ft_isprint.o  ft_memset.o   ft_strcmp.o   ft_strncmp.o  ft_tolower.o ft_isalnum.o  ft_memccpy.o  ft_putchar.o  ft_strcpy.o   ft_strncpy.o  ft_toupper.o ft_isalpha.o  ft_memchr.o   ft_putstr.o   ft_strdup.o   ft_strnstr.o  islower.o ft_isascii.o  ft_memcpy.o   ft_strcat.o   ft_strlen.o   ft_strrchr.o  issame.o ft_isdigit.o  ft_memmove.o  ft_strchr.o   ft_strncat.o  isupper.o ft_strstr.o ft_memcmp.o ft_atoi.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_itoa.o ft_strsplit.o ft_strlcat.o ft_memrcpy.o 
 
clean:
	rm -rf ft_bzero.o    ft_isprint.o  ft_memset.o   ft_strcmp.o   ft_strncmp.o  ft_tolower.o ft_isalnum.o  ft_memccpy.o  ft_putchar.o  ft_strcpy.o   ft_strncpy.o  ft_toupper.o ft_isalpha.o  ft_memchr.o   ft_putstr.o   ft_strdup.o   ft_strnstr.o  islower.o ft_isascii.o  ft_memcpy.o   ft_strcat.o   ft_strlen.o   ft_strrchr.o  issame.o ft_isdigit.o  ft_memmove.o  ft_strchr.o   ft_strncat.o  isupper.o ft_strstr.o ft_memcmp.o ft_atoi.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_itoa.o ft_strsplit.o ft_strlcat.o ft_memrcpy.o 


fclean: clean
	rm -rf $(NAME)

re: fclean all
