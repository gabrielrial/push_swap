#include "../../../include/push_swap.h"

void ra(t_list_ps **stack_a)
{
	t_list_ps *first;
	t_list_ps *last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return;
	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	ft_printf("ra\n");
}