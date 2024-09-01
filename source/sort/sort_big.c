/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:11 by grial             #+#    #+#             */
/*   Updated: 2024/09/01 15:55:42 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_big(t_list_ps **stack_a)
{
	t_list_ps	*stack_b;

	stack_b = NULL;
	if (ps_ft_lstsize(*stack_a) == 4)
		pb(&stack_b, stack_a);
	else
		push_twice_and_sort(stack_a, &stack_b);
	while (ps_ft_lstsize(*stack_a) > 3)
	{
		total_operations_for_list_a(stack_a, &stack_b);
		move_to_b(stack_a, &stack_b);
	}
	sort_three(stack_a);
	while (stack_b)
	{
		total_operations_for_list_b(stack_a, &stack_b);
		move_to_a(stack_a, &stack_b);
	}
	last_sort(stack_a);
	free_list(stack_a);
}
