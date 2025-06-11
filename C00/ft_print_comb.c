#include <unistd.h>

void ft_print_comb(void)
{
    char i = '0', j = '1', k = '2';
    
    while (1)
    {
        if (i < j && j < k)
        {
            write(1, &i, 1);
            write(1, &j, 1);
            write(1, &k, 1);
            if (i != '7' || j != '8' || k != '9')
                write(1, ", ", 2);
            else
                break;
        }
        if (++k > '9' && ++j > '8' && ++i)
            j = i + 1;
        if (k > '9')
            k = j + 1;
    }
}



int main(void)
{
    ft_print_comb();
    return 0;
}
