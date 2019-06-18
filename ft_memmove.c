/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:22:40 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/18 16:34:42 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == dest)
		return (dest);
	if (src > dest)
		ft_memrcpy(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
