/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:21:15 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/19 08:55:30 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s2;
	const unsigned char	*s1;
	size_t i;

	s2 = (unsigned char *)dest;
	s1 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)c)
			return ((void *)&s2[i + 1]);
		*s2++ = *s1++;
		i++;
	}
	return (NULL);
}
