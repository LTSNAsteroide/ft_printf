/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:30:50 by rfolio            #+#    #+#             */
/*   Updated: 2022/12/06 09:30:50 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_putstr_print(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int ft_putnbr_print(int nb)
{
    int     len;
    char    *number;

    number = ft_itoa(nb);
    len = ft_putstr_print(number);
    free(number);
    return (len);
}