/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:18:35 by erc               #+#    #+#             */
/*   Updated: 2020/05/02 00:18:35 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strlcpy() function copies up to size - 1
**characters from the NUL-terminated
**string src to dst, NUL-terminating the result.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_size;

	if (!dst || !src)
		return (0);
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (src_size);
}
