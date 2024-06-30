#include "ft_printf.h"

int ft_puthex(unsigned int n, char specifier)
{
    int len;
    char *base;

    len = 0;
    if (specifier == 'X')
        base = "0123456789abcdef";
    else if (specifier == 'x')
        base = "0123456789ABCDEF";
    if (n >= 16)
    {
        len += ft_puthex(n / 16, specifier);
        len += ft_puthex(n % 16, specifier);
    }
    else
    {
        ft_putchar(base[n]);
        len ++;
    }
    return (len);
}
/*
int main()
{
    int hex = 1234;
    int result = ft_puthex(hex, 'X');
    printf("\n%d\n", result);
}
*/