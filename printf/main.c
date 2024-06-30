#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int result = ft_printf("what %x", "1234");
    printf("%d", result);
    return 0;
}