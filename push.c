
#include "push_swap.h"

static void	push(t_node **src, t_node **dest)
{
	t_node	*tmp;
	if (!src || !(*src))
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = *dest;
	*dest = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
