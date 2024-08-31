/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:10:53 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:40:48 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	char	**args;
	t_list_ps	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	args = init_arg(argc, argv);
	stack_a = init_stack(stack_a, args);
	if (reverse_sorted(stack_a) && ps_ft_lstsize(stack_a) > 3)
		sort_reverse(&stack_a);
	else if (!check_sort(stack_a))
		sort_list(&stack_a);
	free(stack_a);
}