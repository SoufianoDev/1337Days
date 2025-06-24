/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_str_is_uppercase.c                                      :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/24 00:59:13 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/24 01:08:19 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */



int ft_str_is_uppercase(char *str){

    int i = 0;
    while(str[i] != '\0'){

        if (str[i] < 'A' || str[i] > 'Z'){

            return 0;
        }

        i++;

    }

    return 1;


}
