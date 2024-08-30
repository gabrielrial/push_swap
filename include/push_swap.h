#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "push_list.h"
#include "../libft/libft.h"

// SORT
void sort_reverse(t_list_ps **stack_a);
t_list_ps *find_cheapest(t_list_ps *stack_a);
void move_to_b(t_list_ps **stack_a, t_list_ps **stack_b);
void move_to_a(t_list_ps **stack_a, t_list_ps **stack_b);
void move_both(t_list_ps *node, t_list_ps **stack_a, t_list_ps **stack_b);
void move_a(t_list_ps *node, t_list_ps **stack_a);
void move_b(t_list_ps *node, t_list_ps **stack_b);
void push_twice_and_sort(t_list_ps **stack_a, t_list_ps **stack_b);
void sort_three(t_list_ps **stack_a);
void sort_list(t_list_ps **stack_a);
void sort_big(t_list_ps **stack_a);

// TARGET
void targets_for_list_a(t_list_ps **stack_a, t_list_ps **stack_b);
void targets_for_list_b(t_list_ps **stack_a, t_list_ps **stack_b);
void total_operations_for_list_a(t_list_ps **stack_a, t_list_ps **stack_b);
void total_operations_for_list_b(t_list_ps **stack_a, t_list_ps **stack_b);
void operations_to_top(t_list_ps **stack);

// CHECK
int check_sort(t_list_ps *stack);
int reverse_sorted(t_list_ps *stack);
// int target_max(t_list_ps *stack);
void target_min(t_list_ps **stack);

// UTILS
char **init_arg(int argc, char **argv);
char *args_to_array(int argc, char **argv);
void free_array(char ***array);
int only_digits(char **args);
void free_list(t_list_ps **stack);
void ft_free_array(char **array);
// init_stack
t_list_ps *init_stack(t_list_ps *stack_a, char **array);

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