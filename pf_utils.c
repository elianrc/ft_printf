/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:31:40 by erc               #+#    #+#             */
/*   Updated: 2020/08/13 13:21:56 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa_hex_x(unsigned int n, t_info *finfo)
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

char	*ft_utoa_hex_p(unsigned long long int num)
{
	char					*str;
	unsigned int			len;
	unsigned long long int	param;

	len = 1;
	param = num;
	while (param >= 16)
	{
		param /= 16;
		len++;
	}
	len += 2;
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[0] = '0';
	str[1] = 'x';
	str[len] = '\0';
	while (len > 2)
	{
		param = num % 16;
		str[--len] = param < 10 ? param + 48 : param % 10 + 'a';
		num /= 16;
	}
	return (str);
}

void	pf_reset_flags(t_info *finfo)
{
	finfo->flag_minus = 0;
	finfo->flag_zero = 0;
	finfo->width = 0;
	finfo->precision = 0;
}
