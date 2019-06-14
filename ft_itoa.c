/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:06:38 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/14 12:30:27 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int l_strlen(int n)
{
	size_t i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

char *ft_itoa(int n)
{
	size_t strlen;
	char *s;
	int n_cpy;
	char * min;
	char * max;

	n_cpy = n;
	min = "-2147483648";
	max = "2147483647";
	strlen = l_strlen(n);
	if (n == -2147483648)
		return (min);
	if (n == 2147483647)
		return (max);
	if (n < 0)
	{
		strlen++;
		n_cpy = -n;
	}
	if (!(s = ft_strnew(strlen)))
		return (NULL);
	s[strlen--] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		s[strlen--] = n_cpy % 10 + '0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
