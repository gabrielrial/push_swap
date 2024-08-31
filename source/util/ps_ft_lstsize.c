/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ft_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:23:36 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:24:08 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ps_ft_lstsize(t_list_ps *lst)
{
	int		count;
	t_list_ps	*ptr;

	count = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
