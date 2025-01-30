/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:05:47 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/01/30 23:41:02 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**arg_parsing(char *arg, t_stack_node **a)
{
	char	**argv_split;

	argv_split = ft_split(arg, ' ');
	if (!argv_split || !argv_split[0])
	{
		if (argv_split)
			free_split(argv_split);
		ft_printf("Error\n");
		return (NULL);
	}
	init_stack_a(a, argv_split);
	free_split(argv_split);
	return (argv_split);
}

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		if (!arg_parsing(argv[1], &a))
			return (1);
	}
	else
		init_stack_a(&a, argv);
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
