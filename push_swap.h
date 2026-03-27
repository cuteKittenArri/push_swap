
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
  struct s_node  *prev;
} t_node;


void	ft_error(t_node **stack_a, t_node **stack_b);
void	free_stack(t_node **stack);


#endif
