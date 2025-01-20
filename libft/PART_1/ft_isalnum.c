#include "../libft.h"

int     ft_isalnum(int c)
{
        if (ft_isalpha(c) || ft_isdigit(c))
                return (1);
        return (0);
}

/*
int     main(int argc, char *argv[])
{
        int     c1;
        int     c2;

        if (argc == 2)
        {
                c1 = ft_isalnum(argv[1][0]);
                c2 = isalnum(argv[1][0]);
                printf("Using ft_isalnum\n");
                if (c1)
                        printf("%c is an alphanumeric character.\n\n", argv[1][0]);
                else
                        printf("%c is not an alphanumeric character.\n\n", argv[1][0]);
                printf("Using isalnum\n");
                if (c2)
                        printf("%c is an alphanumeric character.\n", argv[1][0]);
                else
                        printf("%c is not an alphanumeric character.\n", argv[1][0]);
                return (0);
        }
        return (1);
}
*/