/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:29:47 by erc               #+#    #+#             */
/*   Updated: 2020/05/04 02:29:52 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates (with malloc(3))
**and returns a new
**string, which is the result
**of the concatenation
**of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(newstr = ft_strnew(size)))
		return (NULL);
	ft_strlcpy(newstr, s1, size + 1);
	ft_strlcat(newstr, s2, size + 1);
	return (newstr);
}
