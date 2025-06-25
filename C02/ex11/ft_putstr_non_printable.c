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
	char	HEX_HIGH_Nibble;
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
			HEX_HIGH_Nibble = to_hex((unsigned char)c / 16);
			HEX_LOW_NIBBLE = to_hex((unsigned char)c % 16);
			write(1, &HEX_HIGH_Nibble, 1);
			write(1, &HEX_LOW_NIBBLE, 1);
		}
		i++;
	}
}
