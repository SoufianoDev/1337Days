/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_print_comb2.c                                           :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/16 18:11:46 by SoufianoDev            #+#    #+#           */
<<<<<<< HEAD
/*       Updated: 2025/06/17 22:31:19 by SoufianoDev            ###   ########.fr    */
=======
/*       Updated: 2025/06/17 21:50:30 by SoufianoDev            ###   ########.fr    */
>>>>>>> 6e03778 (fix)
/*                                                                                   */
/* ********************************************************************************* */

#include < unistd.h > 

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int i = 0;
<<<<<<< HEAD
	\1 (condition)
	{
		 / * code * / 
	}
	(i < = 98)
=======
	while(i < = 98)
>>>>>>> 6e03778 (fix)
	{
		int j = i + 1;
		while (j < = 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			write(1, " ", 1);
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			while (! (i =  = 98 && j =  = 99))
			write(1, ", ", 2);
			j +  + ;
		}
		i +  + ;
	}
}

