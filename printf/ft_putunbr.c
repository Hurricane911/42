#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	unsigned int len;

	char *base = "0123456789";
	len = 0;
	if (n >= 10)
	{
		len += ft_putunbr(n / 10);
		len += ft_putunbr(n % 10);
	}
	else
	{
		putchar(base[n]);
		len++;
	}
	return (len);
}
/*
int main()
{
	unsigned int test = 4294967295;
	int result = ft_putunbr(test);
	printf("\n%d\n", result);

}
*/