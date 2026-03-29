
#include "push_swap.h"
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

void	free_stack(t_node **stack)
{
	t_node *tmp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	error_exit(t_node **stack_a, t_node **stack_b)
{
	if (stack_a)
		free_stack(stack_a);
	if (stack_b)
		free_stack(stack_b);
	write(1, "Error\n", 6);
	exit(1);
}
