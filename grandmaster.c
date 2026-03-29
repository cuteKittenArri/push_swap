
#include "push_swap.h"

static int	max_bits(t_node **stack)
{
	t_node	*curr_node;
	int		max_index;
	int		max_bits;

	curr_node = *stack;
	max_index = curr_node->index;
	while (curr_node)
	{
		if (curr_node->index > max_index)
			max_index = curr_node->index;
		curr_node = curr_node->next;
	}
	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radin_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*curr_node;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	size = stack_size(*stack_a);
	max_bits = max_bits(stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			curr_node = *stack_a;
			if (((curr_node->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (stack_size(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
