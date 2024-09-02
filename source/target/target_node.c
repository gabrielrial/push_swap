/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:22:30 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:49 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	targets_for_list_a(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*tmp_a;
	t_lst	*tmp_b;
	t_lst	*target;
	t_lst	*tarmax;

	tmp_a = *stack_a;
	while (tmp_a)
	{
		tarmax = NULL;
		target = NULL;
		tmp_b = *stack_b;
		while (tmp_b)
		{
			if (tmp_a->content >= tmp_b->content && 
				(!target || tmp_b->content > target->content))
				target = tmp_b;
			if (!tarmax || tmp_b->content > tarmax->content)
				tarmax = tmp_b;
			tmp_b = tmp_b->next;
		}
		if (!target)
			target = tarmax;
		tmp_a->target = target;
		tmp_a = tmp_a->next;
	}
}

void	targets_for_list_b(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*tmp_a;
	t_lst	*tmp_b;
	t_lst	*target;
	t_lst	*tarmin;

	tmp_b = *stack_b;
	while (tmp_b)
	{
		target = NULL;
		tarmin = NULL;
		tmp_a = *stack_a;
		while (tmp_a)
		{
			if (tmp_a->content >= tmp_b->content && 
				(!target || tmp_a->content < target->content))
				target = tmp_a;
			if (!tarmin || tmp_a->content < tarmin->content)
				tarmin = tmp_a;
			tmp_a = tmp_a->next;
		}
		if (!target)
			target = tarmin;
		tmp_b->target = target;
		tmp_b = tmp_b->next;
	}
}

void	operations_to_top(t_lst **stack)
{
	int			index;
	int			to_top;
	t_lst		*tmp;

	index = 0;
	to_top = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp->to_top = to_top;
		if (index >= (ps_ft_lstsize(*stack) / 2) + 1)
		{
			tmp->above_mid = 0;
			to_top--;
		}
		else
		{
			tmp->above_mid = 1;
			to_top++;
		}
		tmp = tmp->next;
		index++;
	}
}

void	total_operations_for_list_a(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*tmp;

	tmp = *stack_a;
	targets_for_list_a(stack_a, stack_b);
	operations_to_top(stack_a);
	operations_to_top(stack_b);
	while (tmp)
	{
		if (tmp->target)
			tmp->moves = tmp->to_top + tmp->target->to_top;
		else
			tmp->moves = tmp->to_top;
		tmp = tmp->next;
	}
}

void	total_operations_for_list_b(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*tmp;

	tmp = *stack_b;
	targets_for_list_b(stack_a, stack_b);
	operations_to_top(stack_a);
	operations_to_top(stack_b);
	while (tmp)
	{
		if (tmp->target)
			tmp->moves = tmp->to_top + tmp->target->to_top;
		else
			tmp->moves = tmp->to_top;
		tmp = tmp->next;
	}
}
