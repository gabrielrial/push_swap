/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:11 by grial             #+#    #+#             */
/*   Updated: 2024/08/30 11:59:07 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void sort_reverse(t_list_ps **stack_a)
{
	t_list_ps *stack_b;

	stack_b = NULL;
	while (*stack_a)
		pb(&stack_b, stack_a);
	while (stack_b)
	{
		rra(&stack_b);
		pa(stack_a, &stack_b);
	}
}