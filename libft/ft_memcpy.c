/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 19:39:17 by erc               #+#    #+#             */
/*   Updated: 2020/04/28 19:39:24 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  memcpy()  function  copies n bytes
**from memory area src to memory area dest.
**The memory areas must not overlap.
**Use memmove(3) if the memory areas do overlap.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		n--;
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}
