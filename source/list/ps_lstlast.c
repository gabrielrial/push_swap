#include "../../include/push_swap.h"

t_list_ps *ps_lstlast(t_list_ps *lst)
{
	t_list_ps *tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}