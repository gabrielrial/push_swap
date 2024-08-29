/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:34:31 by grial             #+#    #+#             */
/*   Updated: 2024/08/26 19:40:17 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list_ps	*init_stack(t_list_ps *stack_a, char **array)
{
	int			i;
	t_list_ps	*new_node;

	if (!array)
		return (NULL);
	i = 0;
	while (array[i])
	{
		new_node = ps_lstnew(atoi(array[i]));
		if (!new_node)
		{
			ft_free_array(array);
			return (NULL);
		}
		ps_lstadd_back(&stack_a, new_node);
		i++;
	}
	ft_free_array(array);
	target_min(&stack_a);
	return (stack_a);
}

void	ft_free_array(char **array)
{
	size_t	i;

	if (array)
	{
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
}
