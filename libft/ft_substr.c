/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 01:50:25 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/13 13:53:49 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (len == 0)
		return (ft_calloc(1, 1));
	i = 0;
	if (ft_strlen(s) < (size_t)start)
		return (ft_calloc(1, 1));
	if (start + len > ft_strlen(s))
		sub = malloc((ft_strlen(s) - start) + 1);
	else
		sub = malloc(len + 1);
	if (!sub)
		return (0);
	while (i < len && start + i < ft_strlen(s))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* #include <stdio.h>

int main(void)
{
	char * s = ft_substr("0123456789", 9, 10);

	printf("%s", s);
	free(s);
} */
