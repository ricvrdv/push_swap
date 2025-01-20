#include "ft_printf.h"

void	ft_putstr_len(char *s, int *len)
{
	size_t	i;

	i = 0;
	while (!s)
	{
		write(1, "(nil)", 5);
		(*len) += 5;
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar_len(s[i], len);
		i++;
	}
}