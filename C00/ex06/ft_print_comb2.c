/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_print_comb2.c                                           :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/16 18:11:46 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/17 01:31:36 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */




#include <unistd.h>



void ft_putchar(char c) {
    write(1, &c, 1);
}


void ft_print_comb2(void)
{
    int i = 0;
    while (i <= 98)
    {
        int j = i + 1;
        while (j <= 99)
        {
            ft_putchar((i / 10) + '0');
            ft_putchar((i % 10) + '0');
            write(1, " ", 1);
            ft_putchar((j / 10) + '0');
            ft_putchar((j % 10) + '0');
            if (!(i == 98 && j == 99))
                write(1, ", ", 2);
            j++;
        }
        i++;
    }
}


int main(void){
    ft_print_comb2();

}



