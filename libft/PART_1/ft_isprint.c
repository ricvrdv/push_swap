#include "../libft.h"

int     ft_isprint(int c)
{
        if (c >= 32 && c <= 126)
                return (1);
        return (0);
}

/*
int     main(void)
{
        int     c1 = '9';
        int     c2 = '\n';
        
        printf("Using ft_isprint:\n");
        if (ft_isprint(c1))
                printf("\"%c\" is printable.\n", c1);
        else
                printf("\"%c\" not printable\n", c1);
        printf("Using isprint:\n");
        if (isprint(c1))
                printf("\"%c\" is printable.\n\n", c1);
        else
                printf("\"%c\" not printable.\n\n", c1);
        
        printf("Using ft_isprint:\n");
        if (ft_isprint(c2))
                printf("\"%c\" is printable.\n", c2);
        else
                printf("\"%c\" not printable.\n", c2);
        printf("Using isprint:\n");
        if (isprint(c2))
                printf("\"%c\" is printable.\n", c2);
        else
                printf("\"%c\" not printable.\n", c2);
        
        return (0);
}
*/