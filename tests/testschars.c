/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testschars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:18:48 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/30 15:31:59 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int main(int ac, char **av)
{
	int(*charfun)(int c);

	if (ac != 3)
		return (0);
	switch (av[1][0])
	{
		case '1':
			charfun = &ft_isalpha;
			break;

		case '2':
			charfun = &ft_isdigit;
			break;

		case '3':
			charfun = &ft_isalnum;
			break;

		case '4':
			charfun = &ft_isascii;
			break;

		case '5':
			charfun = &ft_isprint;
			break;
	}
	if ((*charfun)(av[2][0]) == 1)
	{
		write(1, "true\n", 10);
		return (0);
	}
	else if ((*charfun)(av[2][0]) == 0)
	{
		write(1, "false\n", 10);
		return (0);
	}
	return (0);
}
