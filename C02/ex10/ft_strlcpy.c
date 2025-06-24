/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_strlcpy.c                                               :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/24 18:41:31 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/24 18:41:31 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int strlen = 0;


        if (size > 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    while (src[strlen] != '\0')
        strlen++;


    return strlen;
}
