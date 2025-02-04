/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:05:47 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/02/04 20:17:16 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static char	**arg_parsing(char *arg, t_stack_node **a)
{
	char	**argv_split;

	argv_split = ft_split(arg, ' ');
	if (!argv_split)
	{
		ft_putstr_fd("Error\n", 2);
		return (NULL);
	}
	if (!init_stack_a(a, argv_split, argv_split))
	{
		free_split(argv_split);
		return (NULL);
	}
	free_split(argv_split);
	return (argv_split);
}

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	else if (argc == 2)
	{
		if (!arg_parsing(argv[1], &a))
			return (free_stack(&a), 1);
	}
	else
		if (!init_stack_a(&a, argv + 1, NULL))
			return (free_stack(&a), 1);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	return (free_stack(&a), 0);
}
