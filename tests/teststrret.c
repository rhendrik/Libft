/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrret.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:55:49 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/30 15:32:03 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
	char *bleh;
	int c;
	int i;

	i = atoi(av[4]);
	switch (av[1][0])
	{
		case '1':
			bleh = ft_strcpy(av[2], av[3]);
			ft_putstr(bleh);
			ft_putchar('\n');
			break;
		
		case '2':
			bleh = ft_strncpy(av[2], av[3], i);
			ft_putstr(bleh);
			ft_putchar('\n');
			break;

		case '3':
			bleh = ft_strdup(av[2]);
			ft_putstr(bleh);
			ft_putchar('\n');

		case '4':
			c = av[3][0];
			bleh = ft_strchr(av[2], c);
			ft_putstr(bleh);
			ft_putchar('\n');
	}
	return (0);
}
