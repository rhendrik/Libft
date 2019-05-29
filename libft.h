/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mhead.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:00:48 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/29 13:25:27 by rhendrik         ###   ########.fr       */
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
int		ft_strlen(char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t len);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
/*strnchr*/
/*strstr*/
/*strnstr*/
char *ft_strncat(char *dest, const char *src, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, int n);
int ft_atoi(const char *str);
/*memset*/
/*bzero*/
/*memcpy*/
/*memccpy*/
/*memmove*/
/*memchr*/
/*memcmp*/

#	endif
