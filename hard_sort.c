#include "push_swap.h"

static int	min_pos(t_node **stack)
{
	t_node	*tmp;
	int		min_index;
	int		pos;
	int		min_pos;

	tmp = *stack;
	min_index = tmp->index;
	pos = 0;
	min_pos = 0;
	while (tmp)
	{
		if (tmp->index < min_index)
		{
			min_index = tmp->index;
			min_pos = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	return (min_pos);
}

void	sort_3(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;
	if (first > second && second < third && first < third)
		sa(stack_a);
	else if (first > second && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > second && second < third && first > third)
		ra(stack_a);
	else if (first < second && second > third && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first < second && second > third && first > third)
		rra(stack_a);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	int	pos;

	pos = min_pos(stack_a);
	if (pos == 1)
		ra(stack_a);
	else if (pos == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (pos == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	while (stack_size(*stack_a) > 3)
	{
		int pos = min_pos(stack_a);
		if (pos == 0)
			pb(stack_a, stack_b);
		else if (pos <= 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	sort_3(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}
