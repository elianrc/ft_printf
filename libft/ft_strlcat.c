/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:18:32 by erc               #+#    #+#             */
/*   Updated: 2020/05/02 00:18:33 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strlcat() function appends the
**NUL-terminated string src to the end
**of dst.  It will append at most size
**- strlen(dst) - 1 bytes, NUL-termi‐
**nating the result.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size < dst_len)
		return (src_len + size);
	dst = dst + dst_len;
	ft_strlcpy(dst, src, size - dst_len);
	return (src_len + dst_len);
}
