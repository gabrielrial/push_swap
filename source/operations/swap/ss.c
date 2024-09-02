/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:49:36 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:23 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	ss(t_lst **stack_a, t_lst **stack_b)
{
	sa_ss(stack_a);
	sb_ss(stack_b);
	ft_printf("ss\n");
}

void	sa_ss(t_lst **stack_a)
{
	t_lst	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
}

void	sb_ss(t_lst **stack_b)
{
	t_lst	*tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
}
