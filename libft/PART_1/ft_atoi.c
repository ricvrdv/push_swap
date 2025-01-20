#include "../libft.h"

int     ft_atoi(const char *nptr)
{
        int     i;
        int     sign;
        int     result;

        i = 0;
        sign = 1;
        result = 0;
        while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
                i++;
        if (nptr[i] == '-' || nptr[i] == '+')
        {
                if (nptr[i] == '-')
                        sign = -1;
                i++;
        }
        while (nptr[i] >= '0' && nptr[i] <= '9')
        {
                result = result * 10 + (nptr[i] - '0');
                i++;
        }
        return (result * sign);
}

int   main(void)
{
        char    *str = "\t\v\f\r\n \f-1234abc54";

        printf("String is \"%s\"\n", str);
        printf("Integer is %d (using ft_atoi())\n", ft_atoi(str));
        printf("Integer is %d (using atoi())\n", atoi(str));
        return (0);
}

