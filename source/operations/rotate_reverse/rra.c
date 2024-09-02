/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:26:05 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:23 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	rra(t_lst **stack_a)
{
	t_lst	*first;
	t_lst	*last;

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
	ft_printf("rra\n");
}
