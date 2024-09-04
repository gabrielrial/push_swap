/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:04:43 by grial             #+#    #+#             */
/*   Updated: 2024/09/04 01:16:29 by grial            ###   ########.fr       */
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
}	t_lst;

void		ps_lstadd_back(t_lst **lst, t_lst *new);
t_lst		*ps_lstnew(int content);
t_lst		*ps_lstlast(t_lst *lst);
int			ps_ft_lstsize(t_lst *lst);

#endif