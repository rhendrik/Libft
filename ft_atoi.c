/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:25:32 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/17 11:44:59 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valid(const char *nptr)
{
	int valid;
	size_t i;

	valid = 0;
	i = 0;
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]))
			valid = 1;
		i++;
	}
	return (valid);
}

static int	minmax(const char *nptr)
{
	if (nptr == MAXSTR)
		return (INTMAX);
	if (nptr == MINSTR)
		return (INTMIN);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	size_t			i;
	long long int	res;
	long long int	neg;

	i = 0;
	neg = 1;
	res = 0;
	if (valid(nptr) == 0)
		return (0);
	i = 0;
	if (nptr == MAXSTR || nptr == MINSTR)
		return (minmax(nptr));
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
			|| nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
	{
		i++;
	}
	if ((nptr[i] == '-' && ft_isdigit(nptr[i + 1]))
			|| (nptr[i] == '+' && ft_isdigit(nptr[i + 1])))
	{
		if (nptr[i++] == '-')
			neg = -1;
	}
	while (nptr[i++])
	{
		res = (res * 10) + (long long int)(nptr[i] - '0');
	}
	return (res * neg);
}
