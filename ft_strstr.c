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

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;
	char *ptr;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		if (issame((int)haystack[i], (int)needle[0]))
		{
			ptr = haystack[i];
			k = i;
			while(needle[j])
			{
				if (issame((int)haystack[i], (int)needle[j]))
				{
					k++;
					j++;
				}
				else


		}
	}
}
