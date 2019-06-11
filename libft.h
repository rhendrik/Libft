/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mhead.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:00:48 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/11 17:21:11 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MHEAD_H
#	define MHEAD_H

#include <stdlib.h>
#include <unistd.h>
unsigned int		smin(const char s1, const char s2);
int					islower(int c);
int					isupper(int c);
int					issame(int a, int b);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
/*strnstr*/
char *ft_strcat(char *s1, const char *s2);
char *ft_strncat(char *dest, const char *src, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *nptr);
/*memset*/
/*bzero*/
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void ft_putstr(char *str);
void ft_putchar(char c);
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char *ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strmap(const char *s, char (*f)(char));
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
int ft_strequ(const char *s1, const char *s2);
int ft_strnequ(const char *s1, const char *s2, size_t n);
/*ft_lstnew*/
/*ft_listdelone
ft_lstdel
ft_lstadd
ft_lster
ft_lstmap
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
