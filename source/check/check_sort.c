/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:50:13 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 14:50:14 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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