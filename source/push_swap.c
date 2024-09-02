/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:10:53 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:25:20 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	char		**args;
	t_lst		*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	args = init_arg(argc, argv);
	stack_a = init_stack(stack_a, args);
	if (!check_sort(stack_a))
		sort_list(&stack_a);
	free(stack_a);
}
