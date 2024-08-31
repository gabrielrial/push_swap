/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:11 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:35:32 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void sort_list(t_list_ps **stack_a)
{
	if (ps_ft_lstsize(*stack_a) < 3)
		sa(stack_a);
	else if (ps_ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else
		sort_big(stack_a);
}