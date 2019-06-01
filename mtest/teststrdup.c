/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 17:03:46 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/01 17:17:38 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	(void)ac;
	char *bleh;

	bleh = ft_strdup(av[1]);
	printf("%si\n", bleh);
	bleh = strdup(av[1]);
	printf("%s\n", bleh);
	return (0);
}
