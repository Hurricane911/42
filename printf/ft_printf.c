#include "ft_printf.h"

static int ft_format(va_list args, const char format)
{
    int print_len;

    print_len = 0;
    if (format == 'c')
        print_len += ft_putchar(va_arg(args, int));
    else if (format == 's')
        print_len += ft_putstr(va_arg(args, char *));
    else if (format == 'p')
    {
        print_len = ft_putstr("0x");
        print_len += ft_putptr(va_arg(args, unsigned long));
    }
    //else if (format == 'd' || format == 'i')
       // print_len += ft_putnbr(va_arg(args, int));
    else if (format == 'u')
        print_len += ft_putunbr(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')
        print_len += ft_puthex(va_arg(args, unsigned int), 16);
   // else if (format == '%')
     //   print_len += ft_putpercent();
    return (print_len);
}


int ft_printf(const char *str, ...)
{
    int i;
    va_list args;
    int print_len;

    i = 0;
    print_len = 0;

    va_start(args, str);
    while(str[i])
    {
        if (str[i] == '%')
        {
            if (str[i + 1] != '\0')
                print_len += ft_format(args, str[++i]);
        }
        else
        {
            print_len += ft_putchar(str[i]);
        }
        i++;
    }
    va_end(args);
    return (print_len);
}