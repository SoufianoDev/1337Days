/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_strcapitalize.c                                         :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/24 18:06:32 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/24 18:06:32 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */



char *ft_strcapitalize(char *str)
{

    int i = 0;
    int isUpper = 1;

    while (str[i] != '\0')
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (isUpper)
            {
                str[i] -= ('a' - 'A');
                isUpper = 0;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {

            if (!isUpper)
            {
                str[i] += ('a' - 'A');
                isUpper = 0;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {

            isUpper = 0;
        }
        else
        {

            isUpper = 1;
        }

        i++;
    }

    return str;
}