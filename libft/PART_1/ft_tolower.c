#include "../libft.h"

int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (c + 32);
        return (c);
}

/*
int   main(void)
{
        char    ch = 'G';

        printf("Character is '%c'\n", ch);
        printf("'%c' (using ft_tolower())\n", ft_tolower(ch));
        printf("'%c' (using tolower())\n", tolower(ch));
}
*/