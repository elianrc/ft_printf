/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:10:57 by erc               #+#    #+#             */
/*   Updated: 2020/05/03 17:10:58 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strdup()  function  returns  a  pointer
**to a new string which is a
**duplicate of the string s.
**Memory for the new string is obtained  with
**malloc(3), and can be freed with free(3).
*/

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	size;

	size = ft_strlen(s) + 1;
	if (!(s2 = malloc(size * sizeof(char))))
		return (NULL);
	ft_strlcpy(s2, s, size);
	return (s2);
}
