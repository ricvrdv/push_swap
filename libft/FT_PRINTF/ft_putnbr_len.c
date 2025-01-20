#include "ft_printf.h"

void	ft_putnbr_len(int number, int *len)
{
	char	digit;

	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar_len('-', len);
		number = -number;
	}
	if (number > 9)
		ft_putnbr_len(number / 10, len);
	digit = (number % 10) + '0';
	ft_putchar_len(digit, len);
}