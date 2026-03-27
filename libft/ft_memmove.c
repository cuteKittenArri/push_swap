/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 01:26:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/19 16:42:16 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstcpy;
	const unsigned char	*srccpy;

	if (!dest || !src || n == 0)
		return (dest);
	i = 0;
	dstcpy = (unsigned char *)dest;
	srccpy = (const unsigned char *)src;
	if (dest > src)
	{
		n--;
		while (0 < n)
		{
			dstcpy[n] = srccpy[n];
			n--;
		}
		dstcpy[n] = srccpy[n];
	}
	while (i < n && dest < src)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dest);
}
