/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:24:50 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/10 10:59:47 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char*	ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t c1;

	len = ft_strlen((char *)s2);
	c1 = 0;
	while (n >= 0 && s1[c1])
	{
		s1[c1] = s2[len + c1];
		n--;
		c1++;
	}
	if (!s2[len + c1])
	{
		s1[c1] = s2[len + c1];
		n--;
	}
	if (n == 0)
		s1[c1] = '\0';
	s1[c1] = s2[len + c1];
	if (n > 0 && !s2[len + c1])
		while (n > 0)
		{
			s1[c1++] = '\0';
			n--;
		}
	return (s1);
}
