/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:20:54 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/13 12:21:07 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int *src1;
	int *dest1;
	int i;

	src1 = (void *)src;
	dest1 = (void *)dest;
	i = 0;
	while (n > 0)
	{
		dest1[i] = src1[i];
		i++;
		n--;
	}
	return ((void *)dest);
}
