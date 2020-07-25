/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 02:08:40 by erc               #+#    #+#             */
/*   Updated: 2020/05/03 02:08:50 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strnstr() function locates the first
**occurrence of the null-terminated
**string little in the string big,
**where not more than len characters are searched.
**Characters that appear after a ‘\0’
**character are not searched.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len2;

	if (!*little)
		return ((char *)big);
	len2 = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= len2)
	{
		if (*big == *little && ft_memcmp(big, little, len2) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
