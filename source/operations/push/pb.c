#include "../../../include/push_swap.h"

void pb(t_list_ps **stack_b, t_list_ps **stack_a)
{
	t_list_ps *tmp;

	if (*stack_a == NULL)
		return;
	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_printf("pb\n");
}