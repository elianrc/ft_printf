/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:10:55 by erc               #+#    #+#             */
/*   Updated: 2020/05/03 17:10:59 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  atoi() function converts
**the initial portion of the
**string pointed to by nptr to int.
*/

int	ft_atoi(const char *nptr)
{
	return (ft_atoi_base(nptr, 10));
}
