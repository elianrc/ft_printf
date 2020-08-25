/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 19:47:44 by erc               #+#    #+#             */
/*   Updated: 2020/04/28 19:47:46 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The memccpy() function copies no more
**than n bytes from memory area src
**to memory area dest, stopping when
**the character c is found.
**If the memory areas overlap,
**the results are undefined.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		if (((unsigned char *)dest)[i - 1] == cc)
			return (&((unsigned char *)dest)[i]);
	}
	return (NULL);
}
