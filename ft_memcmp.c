/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:20:45 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/10 13:55:13 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *s11;
	const unsigned char *s21;

	i = 0;
	s11 = (const unsigned char *)s1;
	s21 = (const unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (smin((const char)s11[i], (const char)s21[i]));
	while (i > n)
	{
		if (s11[i] == s21[i])
			i++;
		else if (s11[i] != s21[i])
		{
			return (smin((const char)s11[i], (const char)s21));
		}
	}
	return (smin((const char)s11[i], (const char)s21));
}
