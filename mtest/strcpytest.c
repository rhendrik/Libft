/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpytest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 16:14:15 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/01 16:48:48 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	(void)ac;
	char *bleh;

	bleh = ft_strncpy(av[1], av[2], 5);
	printf("%s\n", bleh);
	bleh = strncpy(av[1], av[2], 5);
	printf("%s\n", bleh);
	return (0);
}
