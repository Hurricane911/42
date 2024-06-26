#include "ft_printf.h"

int ft_putptr(unsigned long nb)
{
	int len;
	char *base;

	len = 0;
	base = "0123456789abcdef";

	if (nb >= 16)
	{
		len += ft_putptr(nb /16);
		len += ft_putptr(nb % 16);
	}
	else
	{
		len += ft_putchar(base[nb]);
	}
	return (len);
}