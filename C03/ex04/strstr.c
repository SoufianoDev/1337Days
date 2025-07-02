/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   strstr.c                                                   :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/07/02 15:26:26 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/07/02 15:26:26 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */



char *ft_strstr(char *str, char *to_find)
{

    int s = 0;
    int f = 0;

    if (to_find[f] == '\0')
    {
        return (str);
    }

    while (str[s] != '\0')
    {

        f = 0;
        while (str[s + f] == to_find[f] && str[s + f] != '\0')
        {

            f++;

            if (to_find[f] == '\0')
            {

                return (&str[s]);
            }
        }

        s++;
    }

    return (0);
}