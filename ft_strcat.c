/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:33:55 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/31 10:33:13 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	int len;
	int c1;
	int c2;

	len = ft_strlen(s1) + ft_strlen((char *)s2) + 2;
	c2 = 0;
	c1 = ft_strlen((char *)s2);

	s1 = (char *)malloc(len * sizeof(char));
	while (s2[c2] != '\0')
		s1[c1++] = s2[c2++];
	s1[c1] = '\0';
	return (s1);
}
