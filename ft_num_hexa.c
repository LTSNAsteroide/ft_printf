/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:20:36 by rfolio            #+#    #+#             */
/*   Updated: 2022/12/07 21:48:37 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_hexa(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_num_hexa(unsigned int num, char *base)
{
	if (num < ft_strlen(base))
		ft_putchar(base[num]);
	else
	{
		ft_num_hexa(num / ft_strlen(base), base);
		ft_num_hexa(num % ft_strlen(base), base);
	}
	return (ft_len_hexa(num));
}
// %p unsigned long long