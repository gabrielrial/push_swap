#include "../../include/push_swap.h"

void ps_lstadd_back(t_list_ps **lst, t_list_ps *new)
{
	t_list_ps *tmp;

	if (lst == NULL || new == NULL)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	tmp = ps_lstlast(*lst);
	if (!tmp)
		*lst = new;
	tmp->next = new;
}