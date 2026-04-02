/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grandmaster.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 22:29:26 by stmuller          #+#    #+#             */
/*   Updated: 2026/04/02 22:29:29 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_bits(t_node **stack)
{
	t_node	*curr_node;
	int		max_index;
	int		max_bit;

	curr_node = *stack;
	max_index = curr_node->index;
	while (curr_node)
	{
		if (curr_node->index > max_index)
			max_index = curr_node->index;
		curr_node = curr_node->next;
	}
	max_bit = 0;
	while ((max_index >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	radin_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*curr_node;
	int		i;
	int		j;
	int		size;
	int		max_bit;

	size = stack_size(*stack_a);
	max_bit = max_bits(stack_a);
	i = 0;
	while (i < max_bit)
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
