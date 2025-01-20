#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_len(char c, int *len);
void	ft_putstr_len(char *s, int *len);
void	ft_putnbr_len(int number, int *len);
void	ft_unsigned_int(unsigned int u, int *len);
void	ft_puthex_len(unsigned int number, int *len, char x);
void	ft_putpointer_len(size_t pointer, int *len);

#endif
