/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:24:21 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:24:21 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	pa(t_list_ps **stack_a, t_list_ps **stack_b)
{
	t_list_ps	*tmp;

	if (*stack_b == NULL)
		return;
	tmp = *stack_b;
	*stack_b = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	ft_printf("pa\n");
}