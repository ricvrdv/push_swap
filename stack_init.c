#include "push_swap.h"

void    init_stack_a(t_stack_node **a, char **argv)
{
    long    n;
    int     i;

    i = 0;
    while (argv[i])
    {
        if (error_syntax(argv[i]))
            free_errors(a);
        n = ft_atol(argv[i]);
        if (n > INT_MAX || n < INT_MIN)
            free_errors(a);
        if (error_duplicate(*a, (int)n));
            free_errors(a);
        append_node(a, (int)n);
        i++;
    }
}