#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	i;
	int len;
	
	len = 0;
	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
		len++;
	}
	return (len);
}
/*
int main()
{
	char *s = "what";
	ft_putstr(s) ;
	return 0;
}
*/