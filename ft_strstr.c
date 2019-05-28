/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:20:29 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/28 13:30:26 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;
	int l;
	char *ptr;

	ptr = NULL;
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (needle[j - 1] == '\0')
				ptr = (char *)&haystack[i];
			k = i;
			while (needle[j] != '\0' && l != 1)
			{
				if (haystack[i] == needle[j])
				{
					i++;
					j++;
				}
				else
				{
					i = k;
					l = 1;
					j = 0;
				}
			}
			i++;
			l = 0;
		}
	}
	return (ptr);
}
