/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:24:25 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:23 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	pb(t_lst **stack_b, t_lst **stack_a)
{
	t_lst	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_printf("pb\n");
}
