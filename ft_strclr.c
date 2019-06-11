/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:15:10 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/11 15:59:02 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strclr(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		s[i++] = '\0';
}
