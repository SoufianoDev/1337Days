/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_strncat.c                                               :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/07/01 18:35:53 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/07/01 18:35:53 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */


char *ft_strncat(char *dest, char *src, unsigned int nb)
{

    int i = 0;
    int j = 0;

    while(dest[i] != '\0')
    {
    
        i++;
    }

        while(src[j] != '\0' &&  j < nb)
        {

            dest[i] = src[j];

            i++;
            j++;

        }
    
    dest[i] = '\0';

    return (dest);
}
