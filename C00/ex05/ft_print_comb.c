/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_print_comb.c                                            :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/16 18:11:46 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/30 21:51:08 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */





#include <unistd.h> 

void ft_print_comb(void)
{
	char i = '0';
	char j = '1';
	char k = '2';

	while (1)
	{
		if (i < j && j < k)
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, &k, 1);
			if (i != '7' || j != '8' || k != '9')
			write(1, ", ", 2);
			else
			break;
		}
		if ( ++k > '9' && ++j > '8' && ++i)
		j = i + 1;
		if (k > '9')
		k = j + 1;
	}
}



