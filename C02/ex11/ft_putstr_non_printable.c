/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_putstr_non_printable.c                                  :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/25 15:23:46 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/25 17:02:10 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */


#include <unistd.h>

char	to_hex(unsigned char val)
{
	if (val < 10)
		return '0' + val;
	return 'a' + (val - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	HEX_HIGH_NIBBLE;
	char	HEX_LOW_NIBBLE;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			HEX_HIGH_NIBBLE = to_hex((unsigned char)c / 16);
			HEX_LOW_NIBBLE = to_hex((unsigned char)c % 16);
			write(1, &HEX_HIGH_Nibble, 1);
			write(1, &HEX_LOW_NIBBLE, 1);
		}
		i++;
	}
}
