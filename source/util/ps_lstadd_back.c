/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:23:40 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:24:05 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ps_lstadd_back(t_list_ps **lst, t_list_ps *new)
{
	t_list_ps	*tmp;

	if (lst == NULL || new == NULL)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	tmp = ps_lstlast(*lst);
	if (!tmp)
		*lst = new;
	tmp->next = new;
}