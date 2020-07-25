/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:18:23 by erc               #+#    #+#             */
/*   Updated: 2020/04/29 14:18:24 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  memmove() function copies n bytes
**from memory area src to memory area dest.
**The memory areas may overlap: copying takes
**place as though the bytes in src are
**first  copied  into a temporary array that
**does not overlap src or dest, and the
**bytes are then copied from the temporary
**array to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
