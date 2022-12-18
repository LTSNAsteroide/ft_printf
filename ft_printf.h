/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:30:44 by rfolio            #+#    #+#             */
/*   Updated: 2022/12/06 09:30:44 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_LIBFTPRINTF_H
#define FT_PRINTF_LIBFTPRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <string.h>

int	ft_unsnum_nbr(unsigned int num, char *base);
int ft_putchar(int c);
int ft_putstr_print(char *str);
int ft_putnbr_print(int nb);
int	ft_num_p(unsigned long long int num, char *base);
int	ft_num_hexa(unsigned int num, char *base);
int ft_printf(const char *input, ...);
//int	ft_num_hex_up(unsigned int num, char *base);

#endif //FT_PRINTF_LIBFTPRINTF_H
