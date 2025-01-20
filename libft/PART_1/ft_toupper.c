#include "../libft.h"

int     ft_toupper(int c)
{
        if (c >= 'a' && c <= 'z')
                return (c - 32);
        return (c);
}

/*
int   main(void)
{
        char    ch = 'a';

        printf("Character is '%c'\n", ch);
        printf("'%c' (using ft_toupper())\n", ft_toupper(ch));
        printf("'%c' (using toupper())\n", toupper(ch));
}
*/