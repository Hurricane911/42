int ft_putaddress(unsigned long nb)
{
    char *base = "0123456789abcdef";

    if(nb >= 16)
    {
        ft_putaddress(nb / 16);
        ft_putaddress(nb % 16);
    }
    else
    {
        return putchar(base[nb]);
    }

}

int main()
{
    int nb = 200;
    ft_putaddress(nb)
}