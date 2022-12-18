/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsnum_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:02:36 by rfolio            #+#    #+#             */
/*   Updated: 2022/12/07 21:48:10 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_nbr(unsigned int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

int	ft_unsnum_nbr(unsigned int num, char *base)
{
	if (num < ft_strlen(base))
		ft_putchar(base[num]);
	else
	{
		ft_num_hexa(num / ft_strlen(base), base);
		ft_num_hexa(num % ft_strlen(base), base);
	}
	return (ft_unsigned_nbr(num));
}