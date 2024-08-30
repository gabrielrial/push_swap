#include "../../include/push_swap.h"

t_list_ps *find_cheapest(t_list_ps *stack_a)
{
	t_list_ps *tmp;
	t_list_ps *cheapest;

	tmp = stack_a;
	cheapest = tmp;
	while (tmp)
	{
		if (cheapest->moves > tmp->moves)
			cheapest = tmp;
		tmp = tmp->next;
	}
	return (cheapest);
}

void move_to_b(t_list_ps **stack_a, t_list_ps **stack_b)
{
	t_list_ps *cheapest;
	t_list_ps *target;

	total_operations_for_list_a(stack_a, stack_b);
	cheapest = find_cheapest(*stack_a);
	target = cheapest->target;
	// ft_printf("NODO: %i - %i - ABOVE MID: %i\nTARGET: %i - %i ABOVE MID: %i\n", cheapest->content, cheapest->to_top, cheapest->above_mid, target->content, target->to_top, target->above_mid);
	if (cheapest->moves == 0)
	{
		// ft_printf("NODO: %i SE MOVIÓ\n", cheapest->content);
		pa(stack_a, stack_b);
	}
	else if ((cheapest->above_mid == target->above_mid) && (cheapest->to_top == target->to_top))
		move_both(cheapest, stack_a, stack_b);
	else if (cheapest->to_top >= 1)
		move_a(cheapest, stack_a);
	else if (target->to_top >= 1)
		move_b(cheapest->target, stack_b);
}

void move_both(t_list_ps *node, t_list_ps **stack_a, t_list_ps **stack_b)
{
	if (node->above_mid == 1)
		rr(stack_a, stack_b);
	else if (node->above_mid == 0)
		rrr(stack_a, stack_b);
}

void move_a(t_list_ps *node, t_list_ps **stack_a)
{
	if (node->to_top >= 1 && node->above_mid == 1)
		ra(stack_a);
	else if (node->to_top >= 1 && node->above_mid == 0)
		rra(stack_a);
}

void move_b(t_list_ps *node, t_list_ps **stack_b)
{
	if (node->to_top >= 1 && node->above_mid == 1)
		rb(stack_b);
	else if (node->to_top >= 1 && node->above_mid == 0)
		rrb(stack_b);
}

void move_to_a(t_list_ps **stack_a, t_list_ps **stack_b)
{
	t_list_ps *cheapest;
	t_list_ps *target;

	cheapest = find_cheapest(*stack_b);
	target = cheapest->target;
	// ft_printf("NODO: %i - %i - ABOVE MID: %i\nTARGET: %i - %i ABOVE MID: %i\n", cheapest->content, cheapest->to_top, cheapest->above_mid, target->content, target->to_top, target->above_mid);
	if (cheapest->moves == 0)
	{
		// ft_printf("NODO: %i SE MOVIÓ\n", cheapest->content);
		pb(stack_b, stack_a);
	}
	else if ((cheapest->above_mid == target->above_mid) && (cheapest->to_top >= 1 && target->to_top >= 1))
		move_both(cheapest, stack_a, stack_b);
	else if (cheapest->to_top >= 1)
		move_b(cheapest, stack_b);
	else if (target->to_top >= 1)
		move_a(cheapest->target, stack_a);
}