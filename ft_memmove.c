/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:22:40 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/19 08:43:16 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dest1;
	const unsigned char *src1;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (src < dest)
	{
		dest1 += n - 1;
		src1 += n - 1;
		while (n--)
			*dest1-- = *src1--;
	}
	else
		while (n--)
			*dest1++ = *src1++;
return (dest1);
}
