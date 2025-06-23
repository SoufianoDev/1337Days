/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_str_is_lowercase.c                                      :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/24 00:42:44 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/24 00:53:42 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */



int ft_str_is_lowercase(char *str){

    int i = 0;
    while(str[i] != '\0'){

        if (!(str[i] >= 'a' && str[i] <= 'z')){

            return 0;
        }

        i++;

    }

    return 1;

}