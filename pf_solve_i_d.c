/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:38:56 by erc               #+#    #+#             */
/*   Updated: 2020/08/24 17:27:01 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts a signed integer to decimal representation.
*/

#include "ft_printf.h"

static	void	pf_flag_checker_id(int strlen, char *str, t_info *finfo)
{
	if (finfo->precision != -1 && finfo->precision < strlen && *str != '0')
		finfo->precision = strlen;
	if (finfo->flag_zero == 1 && finfo->flag_minus == 1)
		finfo->flag_zero = 0;
	if (!IS_MACOS)
		if (finfo->flag_zero == 1 && finfo->precision > 0)
			finfo->flag_zero = 0;
	if (finfo->width == strlen && *str != '0')
		finfo->width = 0;
}

static	int		pf_check_negative_id(int num, t_info *finfo)
{
	if (num < 0)
	{
		if (num == INT_MIN)
			finfo->width -= 1;
		else
		{
			finfo->negative = 1;
			num = num * -1;
			finfo->width -= 1;
		}
	}
	return (num);
}

void			pf_solve_integer(t_info *finfo)
{
	int		num;
	int		strlen;
	char	*str;

	num = va_arg(finfo->ap, int);
	num = pf_check_negative_id(num, finfo);
	str = ft_itoa(num);
	strlen = (int)ft_strlen(str);
	if (finfo->precision > strlen)
		finfo->extra_zero = finfo->precision - strlen;
	pf_flag_checker_id(strlen, str, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(str, finfo);
	else
		printf_minus_false(str, finfo);
	free(str);
	finfo->format++;
}
