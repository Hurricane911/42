#include "ft_printf.h"

int	ft_putnbr(int n)
{
    int len;

    len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
    else if (n < 0)
    {
        len += ft_putchar('-');
        n *= -1;
    }
    if (n >= 9)
    {
        len += ft_putnbr(n / 10);
        len += ft_putnbr(n % 10);
    }
    else
    {
        (ft_putchar(n + 48));
        len++;
    }
    return (len);
}