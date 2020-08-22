/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:40:03 by erc               #+#    #+#             */
/*   Updated: 2020/08/21 14:03:48 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts an unsigned integer to hexadecimal representation.
*/

#include "ft_printf.h"

char			*ft_utoa_hex_x(unsigned int n, t_info *finfo)
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

static	void	pf_flag_checker_x(int strlen, char *str, t_info *finfo)
{
	if (finfo->precision != -1 && finfo->precision < strlen && *str != '0')
		finfo->precision = strlen;
	if (finfo->flag_zero == 1 && finfo->flag_minus == 1)
		finfo->flag_zero = 0;
	if (finfo->flag_zero == 1 && finfo->precision > 0)
		finfo->flag_zero = 0;
}

void			pf_solve_hexadecimal(t_info *finfo)
{
	char				*str;
	int					strlen;
	unsigned int		num;

	num = va_arg(finfo->ap, unsigned int);
	if (num == 0)
	{
		str = "0";
		finfo->null = 1;
	}
	else
		str = ft_utoa_hex_x(num, finfo);
	strlen = ft_strlen(str);
	if (finfo->precision > strlen)
		finfo->extra_zero = finfo->precision - strlen;
	pf_flag_checker_x(strlen, str, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(str, finfo);
	else
		printf_minus_false(str, finfo);
	if (finfo->null == 0)
		free(str);
	finfo->format++;
}
