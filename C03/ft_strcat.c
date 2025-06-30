/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_strcat.c                                                :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/30 13:17:27 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/30 13:17:27 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */





char ft_strcat(char *dest, char *src){

    int i = 0;
    int j = 0;

    while(dest[i] != '\0'){

        dest[i] = src[j];

        i++;
        j++''
    }
    
    dest[i] = '\0';

    return (dest);
}