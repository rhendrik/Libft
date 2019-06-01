/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 17:38:20 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/01 17:39:45 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	return (((unsigned char *)s1 + i) - ((unsigned char *)s2 + i));
}
