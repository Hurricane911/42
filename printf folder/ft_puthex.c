#include <stdio.h>
#include <unistd.h>

int ft_puthex(unsigned long nb, char caps)
{
    char *base;
    int len = 0;

    if (caps == 'x')
    {
        base = "0123456789abcdef";
    }
    else if (caps == 'X')
    {
        base = "0123456789ABCDEF";
    }

    if (nb >= 16)
    {
        ft_puthex(nb / 16, caps); // Recursively handle higher digits
        ft_puthex(nb % 16, caps); // Recursively handle lower digit
    }
    else
    {
        putchar(base[nb]); // Print the last digit directly
        len++; // Increment length for the last digit
    }
    
    return len; // Return the total length of the hexadecimal representation
}

int main()
{
    int nb = 12345;
    char caps = 'x';

    int length = ft_puthex(nb, caps);
    printf("\n%d\n", length); // Print the length of the hexadecimal representation
    
    return 0;
}
