/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 14:53:14 by erc               #+#    #+#             */
/*   Updated: 2020/05/04 14:53:18 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates (with malloc(3))
**and returns a string
**representing the integer
**received as an argument.
**Negative numbers must be handled.
*/

char	*ft_itoa(int n)
{
	return (ft_itoa_base(n, 10));
}
