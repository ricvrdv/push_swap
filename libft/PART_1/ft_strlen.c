#include "../libft.h"

size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}

/*
int     main(int argc, char *argv[])
{
        if (argc == 2)
        {
                printf("%s\n", argv[1]);
                printf("length = %zu (using ft_strlen())\n", ft_strlen(argv[1]));
                printf("length = %zu (using strlen())\n", strlen(argv[1]));
                return (0);
        }
        return (1);
}
*/