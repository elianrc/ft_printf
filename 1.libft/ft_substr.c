/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:29:45 by erc               #+#    #+#             */
/*   Updated: 2020/05/04 02:29:54 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates (with malloc(3))\
**and returns a substring
**from the string ’s’.
**The substring begins at index ’start’ and is of
**maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!(substr = malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		ft_bzero(substr, len + 1);
	else
	{
		s += start;
		ft_strlcpy(substr, s, len + 1);
	}
	return (substr);
}
