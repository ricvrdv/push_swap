#include "ft_printf.h"

void	ft_unsigned_int(unsigned int u, int *len)
{
	char	digit;

	if (u > 9)
		ft_unsigned_int(u / 10, len);
	digit = (u % 10) + '0';
	ft_putchar_len(digit, len);
}