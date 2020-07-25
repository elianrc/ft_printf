/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 14:53:12 by erc               #+#    #+#             */
/*   Updated: 2020/05/04 14:53:20 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates (with malloc(3))
**and returns an array
**of strings obtained by splitting ’s’ using the
**character ’c’ as a delimiter. The array must be
**ended by a NULL pointer.
*/

char	**ft_split(char const *s, char c)
{
	char		**lst;
	size_t		wlen;
	int			i;

	if (!s ||
		!(lst = (char **)malloc((ft_wordcounter(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wlen = ft_strlen(s);
			else
				wlen = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, wlen);
			s += wlen;
		}
	}
	lst[i] = NULL;
	return (lst);
}
