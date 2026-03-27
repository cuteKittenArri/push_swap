
#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
		ft_error(NULL, NULL);
	
}

void	free_stack(t_node **stack){
	t_node *next_node;
	t_node *node;

	node = *stack;
	while (node != NULL){
		next_node = node->next;
		free(node);
	}
	free(stack);
}

void	ft_error(t_node **stack_a, t_node **stack_b)
{
	write(2, "Error\n", 6);
	free_stack(stack_a);
	free_stack(stack_b);
	exit(1);
}

int	is_sorted(t_node **stack){
	TODO
}
