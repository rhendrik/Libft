/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:07:20 by rhendrik          #+#    #+#             */
/*   Updated: 2019/06/13 12:19:53 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
        if (n == 2147483647 || n == -2147483648)
        {
                if (n == -2147483648)
                {
                        ft_putstr_fd("-2147483648", fd);
                        return ;
                }
                else if (n == 2147483647)
                {
                        ft_putstr_fd("2147483647", fd);
                        return ;
                }
        }
        if (n < 0)
        {
                n = n * -1;
                ft_putchar_fd('-', fd);
        }
        if (n < 10)
        {
                ft_putchar_fd((n + 48), fd);
                return ;
        }
        ft_putnbr_fd((n / 10), fd);
        ft_putchar_fd(((n % 10) + 48), fd);
        return ;
}
