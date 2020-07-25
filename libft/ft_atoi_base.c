/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 15:15:51 by erc               #+#    #+#             */
/*   Updated: 2020/05/06 15:15:52 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return with Ternary Operator =
** condition ? value_if_true : value_if_false
*/

static int	ft_isvalid(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '0' + base - 1);
	return (ft_isdigit(c) || (c >= 'a' && c <= 'a' + base - 11) ||
		(c >= 'A' && c <= 'A' + base - 11));
}

int			ft_atoi_base(const char *str, int base)
{
	int			signal;
	long int	nbr;

	nbr = 0;
	signal = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		signal = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isvalid(*str, base))
	{
		if (ft_isdigit(*str))
			nbr = nbr * base + (*str - '0');
		else if (*str >= 'A' && *str <= 'Z')
			nbr = nbr * base + (*str - 'A' + 10);
		else if (*str >= 'a' && *str <= 'z')
			nbr = nbr * base + (*str - 'a' + 10);
		str++;
		if (nbr < 0)
			return (signal == -1 ? 0 : -1);
	}
	return (nbr * signal);
}
