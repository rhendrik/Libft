/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:21:15 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/13 12:23:05 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	char	*s2;
	char	*s1;

	i = 0;
	s2 = (char *)dest;
	s1 = (char *)src;
	c = (unsigned char)c;
	if (s1 == s2 || n == 0)
		return (dest);
	while (n > 0)
	{
		if (s1[i] == (unsigned char)c)
			return (s1 + i + 1);
		s2[i] = (unsigned char)s1[i];
		i++;
		n--;
	}
	return (NULL);
}
