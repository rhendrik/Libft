/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:33:55 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/12 08:39:16 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	size_t len;
	int i;

	i = 0;
	len = ft_strlen((char *)s2);
	if (s1[0] == '\0')
	{
		while (s2[i] != '\0')
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
		return (s1);
	}
	if (s2[0] == '\0')
	{
		s1[len + i] = s2[0];
		return (s1);
	}
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}
