/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:26:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/17 13:11:47 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_howmuch(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_calloc(1, 1));
	while (ft_howmuch(set, s1[i]))
		i++;
	while (ft_howmuch(set, s1[j]) && i < j)
		j--;
	return (ft_substr(s1, i, (j - i) + 1));
}

static int	ft_howmuch(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main(void)
{
	char	*s = ft_strtrim("   xxxtripouille   xxx", " x");
	printf("%s", s);
	free(s);
}
 */