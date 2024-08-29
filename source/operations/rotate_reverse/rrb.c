#include "../../../include/push_swap.h"

void rrb(t_list_ps **stack_b)
{
	t_list_ps *first;
	t_list_ps *last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return;
	first = *stack_b;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	while (first->next != last)
		first = first->next;
	last->next = *stack_b;
	first->next = NULL;
	*stack_b = last;
	ft_printf("rrb\n");
}