/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrbool.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:27:03 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/30 10:53:13 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <string.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	if (ft_strlen(av[1]) == strlen(av[1]))
		write(1, "success!\n", 10);
	else
		write(1, "Nope\n", 10);
	return (0);
}
