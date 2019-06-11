/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:59:17 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/11 16:10:49 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while(*s)
	{
		(*f)(s++);
	}
}
