/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:23:47 by grial             #+#    #+#             */
/*   Updated: 2024/09/01 15:33:24 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list_ps	*ps_lstnew(int content)
{
	t_list_ps	*node;

	node = malloc(sizeof(t_list_ps));
	if (!node)
		return (NULL);
	node->content = content;
	node->above_mid = 1;
	node->to_top = 0;
	node->moves = 0;
	node->min = 0;
	node->next = NULL;
	node->target = NULL;
	return (node);
}
