/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:51:20 by grial             #+#    #+#             */
/*   Updated: 2024/09/01 16:32:46 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_list_ps **stack_a)
{
	t_list_ps	*first;
	t_list_ps	*second;
	t_list_ps	*third;

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
