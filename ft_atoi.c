/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:28:31 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/24 13:01:14 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

int isnum(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (num != 1 && (str[i] >= 9 && str[i] <= 13 || str[i] == 32i || str[i] == '+'))
				i++;
		if (ft_isdigit(str[i]))
		{
			num = 1;
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int ft_atoi(const char *str)
{
}
