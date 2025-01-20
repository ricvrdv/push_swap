#include "ft_printf.h"

void	ft_puthex_len(unsigned int number, int *len, char x)
{
	int		i;
	char	string[10];
	char	*base_character;

	if (x == 'x')
		base_character = "0123456789abcdef";
	else
		base_character = "0123456789ABCDEF";
	i = 0;
	if (number == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (number != 0)
	{
		string[i] = base_character[number % 16];
		number = number / 16;
		i++;
	}
	while (i)
	{
		i--;
		ft_putchar_len(string[i], len);
	}
}