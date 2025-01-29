/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:03:55 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/01/27 17:00:12 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rotate_both(t_stack_node **a, t_stack_node **b,
	t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rr(a, b, false);
	set_index(*a);
	set_index(*b);
}

static void	rev_rotate_both(t_stack_node **a, t_stack_node **b,
	t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rrr(a, b, false);
	set_index(*a);
	set_index(*b);
}

static void	prepare_target(t_stack_node **a, t_stack_node **b, char c)
{
	t_stack_node	*cheapest_node;

	if (c == 'a')
	{
		cheapest_node = get_cheapest(*a);
		if (cheapest_node->above_median
			&& cheapest_node->target_node->above_median)
			rotate_both(a, b, cheapest_node);
		else if (!(cheapest_node->above_median)
			&& !(cheapest_node->target_node->above_median))
			rev_rotate_both(a, b, cheapest_node);
		prep_for_push(a, cheapest_node, 'a');
		prep_for_push(b, cheapest_node->target_node, 'b');
		pb(b, a, false);
	}
	else if (c == 'b')
	{
		prep_for_push(a, (*b)->target_node, 'a');
		pa(a, b, false);
	}
}

static void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		prepare_target(a, b, 'a');
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		prepare_target(a, b, 'b');
	}
	set_index(*a);
	min_on_top(a);
}
