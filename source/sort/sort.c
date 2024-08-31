/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:51:20 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:44:42 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_twice_and_sort(t_list_ps **stack_a, t_list_ps **stack_b)
{
	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
	if ((*stack_b)->content < (*stack_b)->next->content)
		rb(stack_b);
}