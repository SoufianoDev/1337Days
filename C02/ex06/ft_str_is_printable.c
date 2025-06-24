/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_str_is_printable.c                                      :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/24 01:21:29 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/24 01:21:29 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */


int ft_str_is_printable(char *str){

    int i = 0 ;
    while(str[i] != '\0'){

        if (str[i] < 32 || str[i] > 126) {

            return 0;
        }

        i++;
    }

    return 1;

}