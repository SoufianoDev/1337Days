#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    long nr = nbr;

    if (nr < 0)
    {
        ft_putchar('-');
        nr = -nr;
    }

    if (nr > 9)
        ft_putnbr(nr / 10);

    ft_putchar((nr % 10) + '0');
}
int main(){


    ft_putnbr(-1337);

    return 0;
}