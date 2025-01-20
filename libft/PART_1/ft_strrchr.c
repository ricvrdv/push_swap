#include "../libft.h"

char    *ft_strrchr(const char *s, int c)
{
        int             len;
        char    ch;

        ch = (char)c;
        len = 0;
        while (s[len] != '\0')
                len++;
        while (len >= 0)
        {
                if (s[len] == ch)
                        return ((char *)&s[len]);
                len--;
        }
        return (NULL);
}

/*
int   main(void)
{
        char    *string = "ornitorrinco";
        char    to_locate = 'i';
        char    *location_1 = ft_strrchr(string, to_locate);
        char    *location_2 = strrchr(string, to_locate);

        printf("String: \"%s\"\tTo locate: \"%c\"\n", string, to_locate);
        printf("Last occurrence (using ft_strrchr): %s\n", location_1);
        printf("Last occurrence (using strrchr):    %s\n", location_2);
        return (0);
}
*/