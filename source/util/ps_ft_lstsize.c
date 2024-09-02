/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ft_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:23:36 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:25:00 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ps_ft_lstsize(t_lst *lst)
{
	int			count;
	t_lst		*ptr;

	count = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
