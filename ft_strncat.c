/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:24:50 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/31 10:34:10 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *strncat(char *s1, const char *s2, size_t n)
{
	int len;
	int c1;
	int c2;

	len = ft_strlen((char *)s2) + n + 1;
	c1 = 0;
	c2 = ft_strlen((char *)s2);
	s1 = (char *)malloc(len * sizeof(char));
	while (n >= 0)
	{
		s1[c1++] = s2[c2++];
		n--;
	}
	return (s1);
}
