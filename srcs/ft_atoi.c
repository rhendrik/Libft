/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:16:51 by rhendrik          #+#    #+#             */
/*   Updated: 2019/05/20 10:16:57 by rhendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str);

int is_num(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if (str[0] == '-')
                        i++;
                if (str[i] < '0' || str[i] > '9')
                        return (1);
                else
                        i++;
        }
        return (0);
}

int ft_atoi(char *str)
{
        int i;
        unsigned int long long result;
        int neg;

        result = 0;
        i = 0;
        neg = 0;
        if (is_num(str) == 1)
                ft_putstr("Error\n");
        else
        {
                if (str[0] == '-')
                {
                        i = 0;
                        while (str[i] != '\0')
                        {
                                str[i] = str[i + 1];
                                i++;
                        }
                        neg = 1;
                }
        }
        i = 0;
        while (str[i] != '\0')
        {
                result = result * 10 + (str[i] - '0');
                i++;
        }
        if (neg == 1)
                return (result * -1);
        return (result * 1);
}
