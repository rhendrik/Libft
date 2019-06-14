/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:32:28 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/14 14:54:54 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *ft_strnstr(const char *haystack, char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = len;
	if (ft_strlen((char *)haystack) < ft_strlen(needle))
		return (NULL);
	if (!needle || !haystack || len == 0)
		return((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			k = len;
			while (needle[j] && haystack[j + i])
			{
				if (needle[j] != haystack[i + j])
					break ;
				j++;
				k--;
			}
			if (!needle[j])
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
