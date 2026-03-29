
#include "libft/libft.h"
#include "push_swap.h"

static int	valid_arg(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	duplicate_checker(t_node *stack, int nbr)
{
	while (stack)
	{
		if (stack->value == nbr)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	parse(int argc, char **argv, t_node **stack_a)
{
	int		i;
	long	tmp;

	i = 1;
	while (i < argc)
	{
		if(!valid_arg(argv[i]))
			error_exit(stack_a, NULL);
		tmp = ft_atoi(argv[i]);
		if (tmp > 2147483647 || tmp < -2147483648)
			error_exit(stack_a, NULL);
		if (duplicate_checker(*stack_a, (int) tmp))
			error_exit(stack_a, NULL);
		add_back(stack_a, create_node((int)tmp));
		i++;
	}
}
