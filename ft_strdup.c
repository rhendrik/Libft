/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:14:35 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/01 17:11:47 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int conststrlen(const char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(const char *s1)
{
	char *dup;
	int i;

	dup = (char *)malloc(conststrlen(s1) * sizeof(char));
	i = 0;
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = s1[i];
	return (dup);
}
