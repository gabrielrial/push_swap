/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:11 by grial             #+#    #+#             */
/*   Updated: 2024/09/03 22:31:42 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_big(t_lst **stack_a)
{
	t_lst	*stack_b;

	stack_b = NULL;
	if (ps_ft_lstsize(*stack_a) == 4)
		pb(&stack_b, stack_a);
	else
		push_twice_and_sort(stack_a, &stack_b);
	while (ps_ft_lstsize(*stack_a) > 3)
		pb(&stack_b, stack_a);
	sort_three(stack_a);
	while (stack_b)
	{
		total_operations_for_list_b(stack_a, &stack_b);
		move_to_a(stack_a, &stack_b);
	}
	last_sort(stack_a);
}
