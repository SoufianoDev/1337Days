/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_strncpy.c                                               :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/23 17:39:31 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/23 21:42:41 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */






char *ft_strncpy(char *dest, char *src, unsigned int n)
{
     int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
