/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:21:22 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:23 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_lst	*target_cheapest(t_lst *stack_a)
{
	t_lst	*tmp;
	t_lst	*cheapest;

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
