#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_puthex(unsigned int n, char specifier);
int ft_putptr(unsigned long nb);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);
int	ft_putnbr(int n);


#endif