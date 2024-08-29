#include "../../include/push_swap.h"

int ps_ft_lstsize(t_list_ps *lst)
{
	int count;
	t_list_ps *ptr;

	count = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
