/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:51:20 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:23 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_lst **stack_a)
{
	t_lst	*first;
	t_lst	*second;
	t_lst	*third;

	first = *stack_a;
	second = first->next;
	third = second->next;
	if (first->content > second->content && first->content > third->content)
		ra(stack_a);
	else if (second->content > first->content && 
		second->content > third->content)
		rra(stack_a);
	if (!check_sort(*stack_a))
		sa(stack_a);
}
