/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:31:40 by erc               #+#    #+#             */
/*   Updated: 2020/08/08 20:19:26 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa_hex(unsigned int n, t_info *finfo)
{
	char					*str;
	unsigned int			len;
	unsigned int			param;

	len = 1;
	param = n;
	while (param >= 16)
	{
		len++;
		param /= 16;
	}
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (n)
	{
		param = n % 16;
		str[--len] = param < 10 ? param + 48 : param % 10 + *finfo->format - 23;
		n /= 16;
	}
	return (str);
}
