
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "stdbool.h"
# include "limits.h"
# include "unistd.h"

typedef struct s_node{
  int            value;
  int            index;
  struct s_node  *next;
} t_node;


void	error_exit(t_node **stack_a, t_node **stack_b);
void	free_stack(t_node **stack);
void	radin_sort(t_node **stack_a, t_node **stack_b);
void	hard_sort(t_node **stack_a, t_node **stack_b);
void	sort_3(t_node **stack_a);
void	sort_4(t_node **stack_a, t_node **stack_b);
void	sort_5(t_node **stack_a, t_node **stack_b);
t_node	*get_min(t_node	**stack);
void	indexing(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	parse(int argc, char **argv, t_node **stack_a);
int	stack_size(t_node *stack);
t_node	*create_node(int value);
void	add_back(t_node **stack, t_node *new_node);
int	is_sorted(t_node **stack);


#endif
