#include "ft_printf.h"

int ft_format(va_list args, const char format)
{
    int print_len;

    len = 0;
    if (format == 'c')
        print_len += ft_putchar(va_arg(args, char));
    else if (format == 's')
        print_len += ft_putstr(va_arg(args, char *));
    else if (format == 'p')
    {
        len = ft_putstr("0x");
        len += print_len += ft_putptr(va_arg(args, unsigned long));
    }
    else if (format == 'd' || format == 'i')
        print_len += ft_putnbr(va_arg(args, int));
    else if (format == 'u')
        print_len += ft_putunbr(va_args(args, unsigned int));
    else if (format == 'x' || format == 'X')
        print_len += ft_puthex(va_args(args, unsigned int), 16);
    else if (format == '%')
        print_len += ft_putpercent();
    return (print_len);
}


int ft_print(const char *str, ...)
{
    int i;
    va_list args;
    int print_len;

    i = 0;
    print_len = 0;

    va_start(args, str);
    while(str[i])
    {
        if (str == %)
        {
            if (str[i + 1] != '\0')
                len += ft_format(args, str[++i]);
        }
        else
        {
            len += ft_putchar(str[i]);
        }
        i++;
    }
    va_end(args);
    return (print_length);
}