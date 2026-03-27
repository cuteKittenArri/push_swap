/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:50:31 by stmuller          #+#    #+#             */
/*   Updated: 2026/03/20 02:03:38 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi(const char *nptr)
{
	long	result;
	long	minus;

	result = 0;
	minus = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		minus = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while ('0' <= *nptr && *nptr <= '9')
	{
		result = result * 10 +(*nptr -48);
		nptr++;
	}
	return (result * minus);
}

/* #include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", atoi("143523452323525235"));
	printf("%d", ft_atoi("143523452323525235"));
} */
