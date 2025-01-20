#include "../libft.h"

//static void   test_tolower(unsigned int i, char *c);

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
        unsigned int    i;

        i = 0;
        while (s[i] != '\0')
        {
                (*f)(i, &s[i]);
                i++;
        }
}

/* Example of function for testing:
static void     test_tolower(unsigned int i, char *c)
{
        (void)i;
        if (*c >= 'A' && *c <= 'Z')
                *c += 32;
}

int     main(void)
{
        char    string[] = "HELLO World";

        printf("String:\n\"%s\"\tAddress: %p\n", string, string);
        ft_striteri(string, test_tolower);
        printf("Modified string:\n\"%s\"\tAddress: %p\n", string, string);
        return (0);
}
*/