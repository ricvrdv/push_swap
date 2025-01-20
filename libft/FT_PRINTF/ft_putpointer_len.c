#include "ft_printf.h"

void    ft_putpointer_len(size_t pointer, int *len)
{
    char    string[20];
    int i;
    char    *base_character;

    base_character = "0123456789abcdef";
    i = 0,
    ft_putstr_len("0x", len);
    if (pointer == 0)
    {
        ft_putchar_len('0', len);
        return ;
    }
    while (pointer != 0)
    {
        string[i] = base_character[pointer % 16];
        pointer /= 16;
        i++;
    }
    while (i)
    {
        i--;
        ft_putchar_len(string[i], len);
    }
}