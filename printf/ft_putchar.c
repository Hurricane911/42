#include "ft_printf.h"

int ft_putchar(char c)
{
    int len;

    len = 0;
    write(1, &c, 1);
    len++;
    return (len);
}

// int main()
// {
//     char c = 'w';
//     ft_putchar(c);
// }