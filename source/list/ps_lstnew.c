#include "../../include/push_swap.h"

t_list_ps *ps_lstnew(int content)
{
	t_list_ps *node;

	node = malloc(sizeof(t_list_ps));
	if (!node)
		return (NULL);
	node->content = content;
	node->above_mid = 1;
	node->to_top = 0;
	node->moves = 0;
	node->next = NULL;
	node->target = NULL;
	return (node);
}
