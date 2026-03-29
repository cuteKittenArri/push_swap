
#include "push_swap.h"

static void	reverse_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*before_last;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	last = *stack;
	before_last = NULL;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_node **stack_a)
{
	
}
