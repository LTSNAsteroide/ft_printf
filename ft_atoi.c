/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:23:43 by robinfolio        #+#    #+#             */
/*   Updated: 2022/11/11 17:09:31 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sgn;
	int	nb;

	i = 0;
	sgn = 1;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == ' ' || ((9 <= str[i]) && (str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		sgn *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		nb = (nb * 10) + (str[i++] - '0');
	return (sgn * nb);
}

/*int main(int argc, char **argv)
{
    (void)argc;

    printf("%d", ft_atoi(argv[1]));
    return (0);
}*/
