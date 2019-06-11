/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:53:53 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/11 15:07:59 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	size_t i;
	char *nstr;

	if (!(nstr = (char *)malloc(size)))
		return (NULL);
	i = 0;
	while (size > 0)
	{
		nstr[i++] = '\0';
		size--;
	}
	if (!nstr)
		return (NULL);
	return (nstr);
}
