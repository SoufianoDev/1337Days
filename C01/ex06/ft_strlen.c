/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_strlen.c                                                :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/22 12:43:16 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/22 17:36:22 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */





int ft_strlen(char *str){

    int i = 0 ; 
    while(str[i] != '\0')
    i++;

    return i ;
}