/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:52:16 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:23 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	move_to_b(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*cheapest;
	t_lst	*target;

	total_operations_for_list_a(stack_a, stack_b);
	cheapest = target_cheapest(*stack_a);
	target = cheapest->target;
	if (cheapest->moves == 0)
		pb(stack_b, stack_a);
	else if ((cheapest->above_mid == target->above_mid) && 
		(cheapest->to_top == target->to_top))
		move_both(cheapest, stack_a, stack_b);
	else if (cheapest->to_top >= 1)
		move_a(cheapest, stack_a);
	else if (target->to_top >= 1)
		move_b(cheapest->target, stack_b);
}

void	move_both(t_lst *node, t_lst **stack_a, t_lst **stack_b)
{
	if (node->above_mid == 1)
		rr(stack_a, stack_b);
	else if (node->above_mid == 0)
		rrr(stack_a, stack_b);
}

void	move_a(t_lst *node, t_lst **stack_a)
{
	if (node->to_top >= 1 && node->above_mid == 1)
		ra(stack_a);
	else if (node->to_top >= 1 && node->above_mid == 0)
		rra(stack_a);
}

void	move_b(t_lst *node, t_lst **stack_b)
{
	if (node->to_top >= 1 && node->above_mid == 1)
		rb(stack_b);
	else if (node->to_top >= 1 && node->above_mid == 0)
		rrb(stack_b);
}

void	move_to_a(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*cheapest;
	t_lst	*target;

	cheapest = target_cheapest(*stack_b);
	target = cheapest->target;
	if (cheapest->moves == 0)
		pa(stack_a, stack_b);
	else if ((cheapest->above_mid == target->above_mid) && 
		(cheapest->to_top >= 1 && target->to_top >= 1))
		move_both(cheapest, stack_a, stack_b);
	else if (cheapest->to_top >= 1)
		move_b(cheapest, stack_b);
	else if (target->to_top >= 1)
		move_a(cheapest->target, stack_a);
}
