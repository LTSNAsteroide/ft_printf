/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:05:52 by rfolio            #+#    #+#             */
/*   Updated: 2022/12/07 21:48:03 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_p(unsigned long long int n)
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

int	ft_num_p(unsigned long long int num, char *base)
{
	if (num < ft_strlen(base))
		ft_putchar(base[num]);
	else
	{
		ft_num_p(num / ft_strlen(base), base);
		ft_num_p(num % ft_strlen(base), base);
	}
	return (ft_len_p(num));
}