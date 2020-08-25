/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 18:15:18 by erc               #+#    #+#             */
/*   Updated: 2020/04/28 18:15:57 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The  memset()  function  fills  the  first n
**bytes of the memory area
**pointed to by s with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
	{
		n--;
		((unsigned char *)s)[n] = (unsigned char)c;
	}
	return (s);
}
