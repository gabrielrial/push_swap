/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:26:05 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:26:05 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	rra(t_list_ps **stack_a)
{
	t_list_ps	*first;
	t_list_ps	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return;
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