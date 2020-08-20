/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 00:39:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/20 16:50:11 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This file contains two functions:
**-pf_solve_percent
**______Prints %
**-pf_solve_pointer
**______Writes an implementation defined
**______character sequence defining a pointer.
**______(or Pointer Address)
*/

#include "ft_printf.h"

char			*ft_utoa_hex_p(unsigned long long int num)
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

void			pf_solve_pointer(t_info *finfo)
{
	char		*str;
	void		*address;

	address = va_arg(finfo->ap, void *);
	if (address == NULL)
	{
		str = "(nil)";
		finfo->null = 1;
	}
	if (finfo->null == 0)
		str = ft_utoa_hex_p((unsigned long long int)address);
	if (finfo->width < ((int)ft_strlen(str) - 2))
		finfo->width = 0;
	if (finfo->flag_minus == 1)
		print_minus_true(str, finfo);
	else
		printf_minus_false(str, finfo);
	if (finfo->null == 0)
		free(str);
	finfo->format++;
}
