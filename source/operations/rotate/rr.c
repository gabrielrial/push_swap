/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:29 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:23 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	rr(t_lst **node_a, t_lst **node_b)
{
	ra_rr(node_a);
	rb_rr(node_b);
	ft_printf("rr\n");
}

void	ra_rr(t_lst **stack_a)
{
	t_lst	*first;
	t_lst	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
}

void	rb_rr(t_lst **stack_b)
{
	t_lst	*first;
	t_lst	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first = *stack_b;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
}
