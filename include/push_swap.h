/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:08:58 by grial             #+#    #+#             */
/*   Updated: 2024/09/02 15:24:24 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_list.h"
# include "../libft/libft.h"

// SORT
void	last_sort(t_lst **stack_a);
void	sort_big(t_lst **stack_a);
void	sort_list(t_lst **stack_a);
void	sort_big(t_lst **stack_a);
void	last_sort(t_lst **stack_a);
void	sort_three(t_lst **stack_a);
void	push_twice_and_sort(t_lst **stack_a, t_lst **stack_b);
void	sort_reverse(t_lst **stack_a);

// TARGET
void	move_to_b(t_lst **stack_a, t_lst **stack_b);
void	move_to_a(t_lst **stack_a, t_lst **stack_b);
void	move_both(t_lst *node, t_lst **stack_a, t_lst **stack_b);
void	move_a(t_lst *node, t_lst **stack_a);
void	move_b(t_lst *node, t_lst **stack_b);
void	target_min(t_lst **stack);
void	targets_for_list_a(t_lst **stack_a, t_lst **stack_b);
void	targets_for_list_b(t_lst **stack_a, t_lst **stack_b);
void	operations_to_top(t_lst **stack);
void	total_operations_for_list_a(t_lst **stack_a, t_lst **stack_b);
void	total_operations_for_list_b(t_lst **stack_a, t_lst **stack_b);

// CHECK
int		check_sort(t_lst *stack);
int		reverse_sorted(t_lst *stack);

// OTHER
t_lst	*target_cheapest(t_lst *stack_a);
t_lst	*init_stack(t_lst *stack_a, char **array);
t_lst	*ps_lstlast(t_lst *lst);
t_lst	*ps_lstnew(int content);

// UTILS
int		ps_ft_lstsize(t_lst *lst);
void	ps_lstadd_back(t_lst **lst, t_lst *new);
void	free_list(t_lst **stack);
char	**init_arg(int argc, char **argv);
char	*args_to_array(int argc, char **argv);
int		only_digits(char **args);
void	ft_free_array(char **array);

// ROTATE_REVERSE
void	rra(t_lst **stack_a);
void	rrb(t_lst **stack_b);
void	rra_rr(t_lst **stack_a);
void	rrb_rr(t_lst **stack_b);
void	rrr(t_lst **stack_a, t_lst **stack_b);

// ROTATE
void	ra(t_lst **stack_a);
void	rb(t_lst **stack_b);
void	ra_rr(t_lst **stack_a);
void	rb_rr(t_lst **stack_b);
void	rr(t_lst **node_a, t_lst **node_b);

// SWAP
void	sa(t_lst **stack_a);
void	sb(t_lst **stack_b);
void	sa_ss(t_lst **stack_a);
void	sb_ss(t_lst **stack_b);
void	ss(t_lst **stack_a, t_lst **stack_b);

// PUSH
void	pa(t_lst **stack_a, t_lst **stack_b);
void	pb(t_lst **stack_b, t_lst **stack_a);

#endif