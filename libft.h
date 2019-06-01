/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mhead.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:00:48 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/31 11:03:17 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MHEAD_H
#	define MHEAD_H

#include <stdlib.h>
#include <unistd.h>
int		islower(int c);
int		isupper(int c);
int		issame(int a, int b);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
/*strstr*/
/*strnstr*/
char *ft_strncat(char *dest, const char *src, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
/*memset*/
/*bzero*/
/*memcpy*/
/*memccpy*/
/*memmove*/
/*memchr*/
/*memcmp*/
void ft_putstr(char *str);
void ft_putchar(char c);
/*ft_lstnew*/
/*ft_listdelone
ft_lstdel
ft_lstadd
ft_lster
ft_lstmap
ft_memalloc
ft_memdel
ft_strnew
ft_strdel
ft_strclr
ft_striter
ft_striteri
ft_strmap
ft_strmapi
ft_strequ
ft_strnequ
ft_strsub
ft_strjoin
ft_strtrim
ft_strsplit
ft_itoa
ft_putchar
ft_putstr
ft_putendl
ft_putnbr
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd*/


#	endif
