/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:40:03 by erc               #+#    #+#             */
/*   Updated: 2020/08/17 21:10:42 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts an unsigned integer to hexadecimal representation.
*/

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

static	void	pf_flag_checker_x(char *str, t_info *finfo)
{
	if (finfo->width <= (int)ft_strlen(str))
		finfo->width = 0;
	if (finfo->flag_zero == 1 && finfo->flag_minus == 1)
	{
		finfo->flag_zero = 0;
		finfo->precision = 0;
	}
	if (finfo->flag_minus == 1 && finfo->precision > 0)
		finfo->precision = 0;
	if (finfo->flag_zero == 1 && finfo->precision > 0)
	{
		finfo->flag_zero = 0;
		finfo->precision = 0;
	}
}

void			pf_solve_hexadecimal(t_info *finfo)
{
	char	*num;

	num = ft_utoa_hex_x(va_arg(finfo->ap, unsigned int), finfo);
	pf_flag_checker_x(num, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(num, finfo);
	else
		printf_minus_false(num, finfo);
	free(num);
	finfo->format++;
}
