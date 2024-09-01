/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:56 by grial             #+#    #+#             */
/*   Updated: 2024/09/01 15:57:06 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	rrr(t_list_ps **stack_a, t_list_ps **stack_b)
{
	rra_rr(stack_a);
	rrb_rr(stack_b);
	ft_printf("rrr\n");
}

void	rra_rr(t_list_ps **stack_a)
{
	t_list_ps	*first;
	t_list_ps	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	while (first->next != last)
		first = first->next;
	last->next = *stack_a;
	first->next = NULL;
	*stack_a = last;
}

void	rrb_rr(t_list_ps **stack_b)
{
	t_list_ps	*first;
	t_list_ps	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first = *stack_b;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	while (first->next != last)
		first = first->next;
	last->next = *stack_b;
	first->next = NULL;
	*stack_b = last;
}
