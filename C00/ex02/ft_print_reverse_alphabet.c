/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_print_reverse_alphabet.c                                :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/16 18:11:46 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/21 22:17:43 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */





#include < unistd.h >

void ft_print_reverse_alphabet()
{
	char alpha = 'z';
	while (alpha > = 'a')
	{
		write(1, &alpha, 1);
		alpha--;
	}
}
