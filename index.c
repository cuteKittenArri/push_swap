#include "push_swap.h"

t_node	*get_min(t_node	**stack)
{
	t_node	*curr_node;
	t_node	*min_node;
	int		min_exists;

	curr_node = *stack;
	min_node = NULL;
	min_exists = 0;

	while (curr_node)
	{
		if ((curr_node->index == -1) && (!min_exists) || curr_node->value < min_node->value)
		{
			min_node = curr_node;
			min_exists = 1;
		}
		curr_node = curr_node->next;
	}
	return (min_node);
}

void	indexing(t_node **stack)
{
	t_node	*curr_node;
	int		index;

	index = 0;
	curr_node = get_min(stack);
	while (curr_node)
	{
		curr_node->index = index++;
		curr_node = get_min(stack);
	}
}
