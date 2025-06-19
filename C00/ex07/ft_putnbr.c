/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_putnbr.c                                                :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/19 02:57:23 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/19 01:58:14 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */

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
