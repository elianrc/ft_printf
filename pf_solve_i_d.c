/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:38:56 by erc               #+#    #+#             */
/*   Updated: 2020/08/21 09:35:11 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts a signed integer to decimal representation.
*/

#include "ft_printf.h"

static	void	print_minus_true_id(char *str, t_info *finfo)
{
	if (finfo->precision > 0)
	{
		if (finfo->negative == 1)
			ft_putchar_fd('-', 1);
		ft_putnchar('0', finfo->extra_zero);
		pf_printf_string_with_precision(finfo, str, finfo->precision);
		pf_print_width(finfo, finfo->precision);
	}
	else if (finfo->precision == 0)
		pf_print_width(finfo, finfo->precision);
	else
	{
		if (finfo->negative == 1)
			ft_putchar_fd('-', 1);
		ft_putstr_fd(str, 1);
		pf_print_width(finfo, ft_strlen(str));
		finfo->total_written += ft_strlen(str);
	}
}

static	void	printf_minus_false_id(char *str, t_info *finfo)
{
	if (finfo->precision >= 0)
	{
		if (finfo->negative == 1 && finfo->width > 0 && finfo->flag_zero == 1)
		{
			ft_putchar_fd('-', 1);
			finfo->negative = 0;
		}
		pf_print_width(finfo, finfo->precision);
		if (finfo->negative == 1)
			ft_putchar_fd('-', 1);
		ft_putnchar('0', finfo->extra_zero);
		pf_printf_string_with_precision(finfo, str, finfo->precision);
	}
	else
	{
		if (finfo->negative == 1 && finfo->width > 0 && finfo->flag_zero == 1)
		{
			ft_putchar_fd('-', 1);
			finfo->negative = 0;
		}
		pf_print_width(finfo, (int)ft_strlen(str));
		if (finfo->negative == 1)
			ft_putchar_fd('-', 1);
		ft_putstr_fd(str, 1);
		finfo->total_written += ft_strlen(str);
	}
}

static	void	pf_flag_checker_id(int strlen, char *str, t_info *finfo)
{
	if (finfo->precision != -1 && finfo->precision < strlen && *str != '0')
		finfo->precision = strlen;
	if (finfo->flag_zero == 1 && finfo->flag_minus == 1)
		finfo->flag_zero = 0;
	if (finfo->flag_zero == 1 && finfo->precision > 0)
		finfo->flag_zero = 0;
	if (finfo->width == strlen)
		finfo->width = 0;
}

void			pf_solve_integer(t_info *finfo)
{
	int		num;
	int		strlen;
	char	*str;

	num = va_arg(finfo->ap, int);
	if (num < 0)
	{
		finfo->negative = 1;
		num = num * -1;
		finfo->width -= 1;
	}
	str = ft_itoa(num);
	strlen = (int)ft_strlen(str);
	if (finfo->precision > strlen)
		finfo->extra_zero = finfo->precision - strlen;
	pf_flag_checker_id(strlen, str, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true_id(str, finfo);
	else
		printf_minus_false_id(str, finfo);
	free(str);
	finfo->format++;
}
