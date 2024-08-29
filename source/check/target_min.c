#include "../../include/push_swap.h"

void target_min(t_list_ps **stack)
{
	t_list_ps *tmp;
	t_list_ps *min;

	tmp = *stack;
	min = *stack;
	while (tmp)
	{
		if (tmp->content < min->content)
			min = tmp;
		tmp = tmp->next;
	}
	min->min = 1;
}