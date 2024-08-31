/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:22:22 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:27:12 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	target_min(t_list_ps **stack)
{
	t_list_ps	*tmp;
	t_list_ps	*min;

	tmp = *stack;
	min = *stack;
	while (tmp)
	{
		if (tmp->content < min->content)
			min = tmp;
		tmp = tmp->next;
	}
	min->min = 1;
}