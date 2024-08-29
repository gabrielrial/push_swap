#include "../../include/push_swap.h"

int target_max(t_list_ps **stack)
{
	t_list_ps *tmp;
	t_list_ps *max;

	tmp = *stack;
	max = *stack;
	while (stack)
	{
		if (tmp->content > max->content)
			max = tmp;
		tmp = tmp->next;
	}
	// max->max = 1;
	return (1);
}