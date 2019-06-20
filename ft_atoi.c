/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 08:47:29 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/19 09:02:43 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	negbool(const char **s)
{
	int isneg;

	isneg = 0;
	while (**s == ' ' || **s == '\t' || **s == '\f' || **s == '\v'
			|| **s == '\n' || **s == '\r')
		++*s;
	if (**s == '-')
	{
		isneg = 1;
		++*s;
	}
	else if (**s == '+')
		++*s;
	return (isneg);
}

int	ft_atoi(const char *str)
{
	int			ret;
	int			isneg;
	const char	*s;

	s = str;
	isneg = negbool(&s);
	ret = 0;
	if (str == MINSTR)
		return (INTMIN);
	while (ft_isdigit(*s))
	{
		ret *= 10;
		ret += *s - '0';
		if (ret < 0 && isneg == 1)
			return (0);
		if (ret < 0)
			return (-1);
		++s;
	}
	if (isneg)
	{
		ret = ret * -1;
	}
	return (ret);
}
