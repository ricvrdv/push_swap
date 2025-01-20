#include "../libft.h"

void    *ft_memset(void *s, int c, size_t len)
{
        unsigned char   uc;
        char                    *ptr;
        size_t                  i;

        ptr = (char *)s;
        uc = (unsigned char)c;
        i = 0;
        while (i < len)
        {
                ptr[i] = uc;
                i++;
        }
        return (s);
}

/*
int     main(void)
{
        char    buffer_1[] = "Hello";
        char    buffer_2[] = "Hello";

        printf("Original buffer_1: \"%s\"\n", buffer_1);
        
        ft_memset(buffer_1, 'a', 3);
        printf("After ft_memset(): \"%s\"\n\n", buffer_1);
        
        printf("Original buffer_2: \"%s\"\n", buffer_2);
        memset(buffer_2, 'a', 3);
        printf("After memset(): \"%s\"\n", buffer_2);
        return (0);
}
*/