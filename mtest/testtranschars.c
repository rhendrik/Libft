/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testtranschars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:07:22 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/01 17:01:16 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int main(int ac, char **av)
{
	char c;
	int(*charfun)(int c);

	if (ac != 3)
		return (0);
	switch (av[1][0])
	{
		case '1':
			charfun = &ft_toupper;
			break;

		case '2':
			charfun = &ft_tolower;
			break;
	}
   	c = (charfun)(av[2][0]);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
