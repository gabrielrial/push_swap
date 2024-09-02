/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:34:31 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:30:11 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_lst	*init_stack(t_lst *stack_a, char **array)
{
	int			i;
	t_lst		*new_node;

	if (!array)
		return (NULL);
	i = 0;
	while (array[i])
	{
		new_node = ps_lstnew(ft_atoi(array[i]));
		if (!new_node || (array[i][0] != '0' && new_node->content == 0))
		{
			ft_printf("Error\n");
			free(new_node);
			ft_free_array(array);
			free_list(&stack_a);
			stack_a = NULL;
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
