/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:21:22 by grial             #+#    #+#             */
/*   Updated: 2024/09/01 15:52:34 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list_ps	*target_cheapest(t_list_ps *stack_a)
{
	t_list_ps	*tmp;
	t_list_ps	*cheapest;

	tmp = stack_a;
	cheapest = tmp;
	while (tmp)
	{
		if (cheapest->moves > tmp->moves)
			cheapest = tmp;
		tmp = tmp->next;
	}
	return (cheapest);
}
