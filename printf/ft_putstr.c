#include "ft_printf.h"

void	ft_putstr(char *s)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(&s[i]);
		i++;
	}
}
/*
int main()
{
	char *s = "what";
	ft_putstr(s) ;
	return 0;
}
*/