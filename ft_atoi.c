
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:10:18 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/14 09:17:06 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	size_t i;
	long long int res;
	long long int neg;
	int valid;
	char *min;
	char *max;

	min = "-2147483648";
	max = "2147483647";
	i = 0;
	neg = 1;
	res = 0;
	valid = 0;
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]))
				valid = 1;
		i++;
	}
	if (valid == 0)
		return (0);
	i = 0;
	if (nptr == max)
		return (2147483647);
	if (nptr == min)
		return (-2147483648);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
|| nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
	{
			i++;
	}
	if ((nptr[i] == '-' && !ft_isdigit(nptr[i + 1])) || (nptr[i] == '+' && !ft_isdigit(nptr[i+1])))
		return (0);
	if ((nptr[i] == '-' && ft_isdigit(nptr[i + 1])) || (nptr[i] == '+' && ft_isdigit(nptr[i+1])))
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
		while (nptr[i])
	{
		res = (res * 10) + (long long int)(nptr[i] - '0');
		i++;
	}
	return (res * neg);
}
