/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:18:27 by erc               #+#    #+#             */
/*   Updated: 2020/04/29 14:18:28 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The calloc() function allocates memory for an array of
**nmemb elements  of  size  bytes
**each  and  returns  a pointer to the allocated memory.
**The memory is set to zero.  If
**nmemb or size is 0, then calloc() returns either NULL,
**or a unique pointer value  that
**can later be successfully passed to free().
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new;

	if (!(new = malloc(size * nmemb)))
		return (NULL);
	ft_memset(new, 0, nmemb * size);
	return (new);
}
