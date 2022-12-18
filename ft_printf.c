#include "ft_printf.h"
#include <stdarg.h>


int ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_arg_search(const char input, va_list *arg)
{
    int len;

    len  = 0;
    if (input == 'c')
        len += ft_putchar(va_arg(*arg, int));
    else if (input == 's')
        len += ft_putstr_print(va_arg(*arg, char *));
    else if (input == 'd' || input == 'i')
        len += ft_putnbr_print(va_arg(*arg, int));
    else if (input == 'x')
        len += ft_num_hexa(va_arg(*arg, unsigned int), "0123456789abcdef");
    else if (input == 'X')
        len += ft_num_hexa(va_arg(*arg, unsigned int), "0123456789ABCDEF");
    else if (input == 'u')
        len += ft_unsnum_nbr(va_arg(*arg, unsigned int), "0123456789");
    else if (input == 'p')
    {
        len += write(1, "0x", 2);
        len += ft_num_p(va_arg(*arg, unsigned long long int), "0123456789abcdef");
    }
    else if (input == '%')
        len += write(1, "%", 1);
    return (len);
}

int ft_printf(const char *input, ...)
{
    int     i;
    va_list arg;
    int     len;

    i = 0;
    len = 0;
    va_start(arg, input);
    while(input[i])
    {
        if (input[i] == '%')
        {
            len += ft_arg_search(input[i + 1], &arg);
            i++;
        }
        else
            len += ft_putchar(input[i]);
        i++;
    }
    va_end(arg);
    return (len);
}

/*int main()
{
    ft_printf("bonjour");
    return (0);
}*/