/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_print_alphabet.c                                        :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/16 18:11:46 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/17 03:27:47 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */








#include <unistd.h>

void ft_print_alphabet()
{
    char alpha = 'a';
    while (alpha <= 'z')
    {
        write(1, &alpha, 1);
            alpha++;
    }
}
