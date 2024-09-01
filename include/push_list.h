/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:04:43 by grial             #+#    #+#             */
/*   Updated: 2024/09/01 16:08:39 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_LIST_H
# define PUSH_LIST_H

typedef struct s_list_ps
{
	int					content;
	int					to_top;
	int					moves;
	int					above_mid;
	int					min;
	struct s_list_ps	*target;
	struct s_list_ps	*next;
}	t_list_ps;

void		ps_lstadd_back(t_list_ps **lst, t_list_ps *new);
t_list_ps	*ps_lstnew(int content);
t_list_ps	*ps_lstlast(t_list_ps *lst);
int			ps_ft_lstsize(t_list_ps *lst);

#endif