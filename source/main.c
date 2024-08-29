/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:10:53 by grial             #+#    #+#             */
/*   Updated: 2024/08/27 16:03:56 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	char		**args;
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

void	sort_list(t_list_ps **stack_a)
{
	if (ps_ft_lstsize(*stack_a) < 3)
		sa(stack_a);
	else if (ps_ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else
		sort_big(stack_a);
}

void	sort_big(t_list_ps **stack_a)
{
	t_list_ps	*stack_b;

	stack_b = NULL;
	if (ps_ft_lstsize(*stack_a) == 4)
		pa(stack_a, &stack_b);
	else
		push_twice_and_sort(stack_a, &stack_b);
	while (ps_ft_lstsize(*stack_a) > 3)
	{
		total_operations_for_list_a(stack_a, &stack_b);
		move_to_b(stack_a, &stack_b);
	}
	sort_three(stack_a);
	while (stack_b)
	{
		total_operations_for_list_b(stack_a, &stack_b);
		move_to_a(stack_a, &stack_b);
	}
	while (!check_sort(*stack_a))
		ra(stack_a);
	//print_list(*stack_a);
	free_list(stack_a);
}

void	print_list(t_list_ps *list)
{
	t_list_ps	*tmp;

	if (list == NULL)
		ft_printf("List does not exist\n");
	tmp = list;
	while (tmp)
	{
		ft_printf(" %i -", tmp->content);
		tmp = tmp->next;
	}
	ft_printf("NULL\n");
}

void	free_list(t_list_ps **stack)
{
	t_list_ps	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}
