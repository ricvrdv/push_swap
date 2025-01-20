#include "../libft.h"

void    ft_bzero(void *s, size_t n)
{
        unsigned int    i;
        char                    *ptr;

        ptr = (char *)s;
        i = 0;
        while (i < n)
        {
                ptr[i] = 0;
                i++;
        }
}

/*
int   main(void)
{
        int     i;
        int     buffer_1[] = {1, 2, 3, 4, 5};
        int     buffer_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        // Buffer_1:---------------------------------------
        i = 0;
        printf("buffer_1:\n");
        while (i < 5)
        {
                printf("%d ", buffer_1[i]);
                i++;
        }
        printf("\n");

        bzero(buffer_1, sizeof(buffer_1));

        i = 0;
        printf("buffer_1 zeroed:\n");
        while (i < 5)
        {
                printf("%d ", buffer_1[i]);
                i++;
        }
        printf("\n\n");

        // Buffer_2:--------------------------------------
        i = 0;
        printf("buffer_2:\n");
        while (i < 10)
        {
                printf("%d ", buffer_2[i]);
                i++;
        }
        printf("\n");

        ft_bzero(buffer_2, sizeof(buffer_2));

        i = 0;
        printf("buffer_2 zeroed:\n");
        while (i < 10)
        {
                printf("%d ", buffer_2[i]);
                i++;
        }
        printf("\n");
}
*/