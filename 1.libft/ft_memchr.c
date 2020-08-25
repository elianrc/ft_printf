/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 23:35:16 by erc               #+#    #+#             */
/*   Updated: 2020/04/29 23:35:22 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  memchr()  function  scans  the  initial
**n bytes of the memory area
**pointed to by s for the first instance
**of c.  Both c and the  bytes  of
**the memory area pointed to by s
**are interpreted as unsigned char.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((void *)&((unsigned char *)s)[i]));
		i++;
	}
	return (NULL);
}
