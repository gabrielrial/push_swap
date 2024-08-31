#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "push_list.h"
#include "../libft/libft.h"

// SORT
void    last_sort(t_list_ps **stack_a);
void	sort_big(t_list_ps **stack_a);
void	sort_list(t_list_ps **stack_a);
void	sort_big(t_list_ps **stack_a);
void	last_sort(t_list_ps **stack_a);
void	sort_three(t_list_ps **stack_a);
void	push_twice_and_sort(t_list_ps **stack_a, t_list_ps **stack_b);
void	sort_reverse(t_list_ps **stack_a);

// TARGET
t_list_ps	*find_cheapest(t_list_ps *stack_a);
void	move_to_b(t_list_ps **stack_a, t_list_ps **stack_b);
void	move_to_a(t_list_ps **stack_a, t_list_ps **stack_b);
void	move_both(t_list_ps *node, t_list_ps **stack_a, t_list_ps **stack_b);
void	move_a(t_list_ps *node, t_list_ps **stack_a);
void	move_b(t_list_ps *node, t_list_ps **stack_b);
void	target_min(t_list_ps **stack);
void	targets_for_list_a(t_list_ps **stack_a, t_list_ps **stack_b);
void	targets_for_list_b(t_list_ps **stack_a, t_list_ps **stack_b);
void	operations_to_top(t_list_ps **stack);
void	total_operations_for_list_a(t_list_ps **stack_a, t_list_ps **stack_b);
void	total_operations_for_list_b(t_list_ps **stack_a, t_list_ps **stack_b);

// CHECK
int	check_sort(t_list_ps *stack);
int	reverse_sorted(t_list_ps *stack);

// UTILS
int	ps_ft_lstsize(t_list_ps *lst);
void	ps_lstadd_back(t_list_ps **lst, t_list_ps *new);
t_list_ps	*ps_lstlast(t_list_ps *lst);
t_list_ps	*ps_lstnew(int content);
void	free_list(t_list_ps **stack);
char	**init_arg(int argc, char **argv);
char	*args_to_array(int argc, char **argv);
int	only_digits(char **args);
t_list_ps	*init_stack(t_list_ps *stack_a, char **array);
void	ft_free_array(char **array);

// ROTATE_REVERSE
void rra(t_list_ps **stack_a);
void rrb(t_list_ps **stack_b);
void rra_rr(t_list_ps **stack_a);
void rrb_rr(t_list_ps **stack_b);
void rrr(t_list_ps **stack_a, t_list_ps **stack_b);

// ROTATE
void ra(t_list_ps **stack_a);
void rb(t_list_ps **stack_b);
void ra_rr(t_list_ps **stack_a);
void rb_rr(t_list_ps **stack_b);
void rr(t_list_ps **node_a, t_list_ps **node_b);

// SWAP
void sa(t_list_ps **stack_a);
void sb(t_list_ps **stack_b);
void sa_ss(t_list_ps **stack_a);
void sb_ss(t_list_ps **stack_b);
void ss(t_list_ps **stack_a, t_list_ps **stack_b);

// PUSH
void pa(t_list_ps **stack_a, t_list_ps **stack_b);
void pb(t_list_ps **stack_b, t_list_ps **stack_a);

#endif