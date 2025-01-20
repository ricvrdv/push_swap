#include "ft_printf.h"

static void	check_specifier(char s, va_list *args, int *len, int *i);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			check_specifier(format[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_len((char)format[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}

static void	check_specifier(char sp, va_list *args, int *len, int *i)
{
	if (sp == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (sp == 's')
		ft_putstr_len(va_arg(*args, char *), len);
	else if (sp == 'p')
		ft_putpointer_len(va_arg(*args, size_t), len);
	else if (sp == 'd' || sp == 'i')
		ft_putnbr_len(va_arg(*args, int), len);
	else if (sp == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (sp == 'x')
		ft_puthex_len(va_arg(*args, unsigned int), len, 'x');
	else if (sp == 'X')
		ft_puthex_len(va_arg(*args, unsigned int), len, 'X');
	else if (sp == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	main()
{
	char	ch = 'r';
	int		number = -42;
	char	*string = "Hello world!";

	ft_printf("Hello my name starts with an %c and I study at %u. %s\naddress: %p", ch, number, string, string);
	return (0);
}