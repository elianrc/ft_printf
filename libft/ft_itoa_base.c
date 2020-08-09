/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 14:01:55 by erc               #+#    #+#             */
/*   Updated: 2020/08/08 11:43:08 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**value - Value to be conv. to str.
**buffer - array to store the result str.
**base - Num. base that repre. value of str.
**	(between 2 and 36)
*/

static void	ft_convert(char *nbr, int n, int base, size_t len)
{
	int	dig;

	if (n < 0 && base == 10)
		nbr[0] = '-';
	if (n == 0)
		nbr[0] = '0';
	nbr[len] = '\0';
	while (n != 0)
	{
		dig = (n % base) * ((n < 0) ? -1 : 1);
		n = n / base;
		if (dig < 10)
			nbr[--len] = '0' + dig;
		else
			nbr[--len] = 'A' + dig - 10;
	}
}

char		*ft_itoa_base(int n, int base)
{
	char	*nbr;
	int		len;

	len = ft_numdig(n, base) + ((n < 0 && base != 10) ? -1 : 0);
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_convert(nbr, n, base, len);
	return (nbr);
}
