/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:27:53 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/12 13:47:29 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(const char *s)
{
	size_t start;
	size_t len;
	size_t i;
	char *ret;

	i = 0;
	start = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	if (!(ret = ft_memalloc(ft_strlen((char *)s) + 1)))
		return (NULL);
	while(s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
		{
			start = i;
			break;
		}
	}
	i = ft_strlen((char *)s);
	while (len == 0)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i--;
		else 
		{
			len = i + 1;
			break;
		}
	}
	if (len == 0)
		len = ft_strlen((char *)s);
	if (start == 0 && len == 0)
		ret = ft_strcpy(ret, s);
	ret = ft_strsub(s, start, len);
	return (ret);
}
