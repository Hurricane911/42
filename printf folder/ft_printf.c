#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_putaddress(unsigned long nb)
{
    int re = 0;
    char *base = "0123456789abcdef";

    if (nb >= 16)
    {
        re += ft_putaddress(nb / 16);
        re += ft_putaddress(nb % 16);
    }
    else
    {
        re += putchar(base[nb]);
    }
    return re;
}

int ft_check(va_list args, char c)
{
    int re = 0;

    if (c == 'p')
    {
        re += write(1, "0x", 2);
        re += ft_putaddress(va_arg(args, unsigned long long));
    }
    return re;
}

int ft_print(const char *str, ...)
{
    int i;
    va_list args;
    int re = 0;

    va_start(args, str);
    i = 0;
    while (str[i])
    {
        if (str[i] == '%')
        {
            if (str[i + 1] != '\0')
            {
                re += ft_check(args, str[++i]);
            }
            else
                re += putchar(str[i]);
            i++;
        }
        else
        {
            re += putchar(str[i]);
            i++;
        }
    }
    va_end(args);
    return re;
}

int main()
{
    unsigned long nb = 255;
    
    ft_print("%p\n", (void*)nb);
    return 0;
}
