/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:11 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:25:15 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	last_sort(t_lst **stack_a)
{
	int			i;
	t_lst		*tmp;

	i = 0;
	tmp = *stack_a;
	while (tmp->min != 1)
	{
		i++;
		tmp = tmp->next;
	}
	if (i >= (ps_ft_lstsize(*stack_a) / 2) + 1)
	{
		while (!check_sort(*stack_a))
			rra(stack_a);
	}
	else
	{
		while (!check_sort(*stack_a))
			ra(stack_a);
	}
}
