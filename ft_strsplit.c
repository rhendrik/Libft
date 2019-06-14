/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:37:57 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/14 14:37:15 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int wc(const char *s, char c)
{
	size_t i;
	int wci;

	i = 0;
	wci = 1;
	if (!s)
		return (0);
	while(s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || s[i])
			wci++;
		i++;
	}
	return (wci);
}

static char *mword(const char *s, char c, int index)
{
	size_t i;
	char *word;

	i = 0;
	while(s[i] || s[i] != c)
		i++;
	word = ft_strsub(s, index, i + 1);
	return (word);
}

static int check(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
	}
	return (0);
}

static int check2(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			return (0);
		i++;
	}
	return (1);
}

char **ft_strsplit(const char *s, char c)
{
	int wci;
	char **ret;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	ret = (NULL);
	if (!s)
		return (NULL);
	if (check(s, c) == 0)
	{
		return (ret);
	}
	if (check2(s, c) == 1)
		return (ret);
	wci = wc(s, c);
	if (!(ret = (char **)malloc((ft_strlen((char *)s) + wci) * sizeof(*ret))))
		return (NULL);
	while (wci > 0 && s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			ret[j++] = mword(s, c, i + 1);
			wci--;
		}
		i++;
	}
	return (ret);
}
