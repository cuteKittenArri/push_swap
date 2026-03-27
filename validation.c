/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 01:11:18 by stmuller          #+#    #+#             */
/*   Updated: 2026/03/20 01:53:44 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	valid(char **argv){
	size_t	i;

	i = 0;
	while (argv[i])
	{
		if (!(ft_isnum_pm(argv[i])))
			return (false);
		i++;
	}
	return (true);
}

bool	duplicate_checker(t_stack_node **stack, long nbr){
	t_stack_node	*node;

	if (!stack)
		return (false);
	node = *stack;
	while (node->next == NULL) {
		if (node->nbr == nbr)
			return (true);
		node = node->next;
	}
	if (node->nbr == nbr)
		return (true);
	else
		return (false);
}
