/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:26:54 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/27 11:14:15 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

char *strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while(len > 0)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	return (dst);
}
