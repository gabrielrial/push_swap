#include "../../include/push_swap.h"

int check_sort(t_list_ps *stack)
{
        t_list_ps *tmp;

        tmp = stack;
        if (!tmp || !tmp->next)
                return (1);
        while (tmp->next)
        {
                if (tmp->content > tmp->next->content)
                        return (0);
                tmp = tmp->next;
        }
        return (1);
}