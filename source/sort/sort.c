/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:51:20 by grial             #+#    #+#             */
/*   Updated: 2024/08/30 11:59:26 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void push_twice_and_sort(t_list_ps **stack_a, t_list_ps **stack_b)
{
	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
	if ((*stack_b)->content < (*stack_b)->next->content)
		rb(stack_b);
}

void sort_three(t_list_ps **stack_a)
{
	t_list_ps *first;
	t_list_ps *second;
	t_list_ps *third;

	if (check_sort(*stack_a))
		return;
	if (reverse_sorted(*stack_a))
	{
		ra(stack_a);
		sa(stack_a);
		return;
	}
	first = *stack_a;
	second = first->next;
	third = second->next;
	if (first->content > second->content && first->content > third->content)
		ra(stack_a);
	else if (second->content > first->content && second->content > third->content)
		rra(stack_a);
	if (!check_sort(*stack_a))
		sa(stack_a);
}
