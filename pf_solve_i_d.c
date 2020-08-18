/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:38:56 by erc               #+#    #+#             */
/*   Updated: 2020/08/18 12:52:48 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts a signed integer to decimal representation.
*/

#include "ft_printf.h"

static	void	print_minus_true_id(int	num, char *str, t_info *finfo)
{
	if (finfo->precision >= 0 && num < 0)
	{
		ft_putchar_fd('-', 1);
		finfo->total_written++;	
	}
	if (finfo->precision >= 0)
	{
		pf_printf_string_with_precision(finfo, str, finfo->precision);
		pf_print_width(finfo, finfo->precision);
	}
	else
	{
		ft_putstr_fd(str, 1);
		pf_print_width(finfo, ft_strlen(str));
		finfo->total_written += ft_strlen(str);
	}
}

static	void	printf_minus_false_id(int num, char *str, t_info *finfo)
{
	if (finfo->precision >= 0 && num < 0)
	{
		ft_putchar_fd('-', 1);
		finfo->total_written++;	
	}
	if (finfo->precision >= 0)
	{
		pf_print_width(finfo, finfo->precision);
		pf_printf_string_with_precision(finfo, str, finfo->precision);
	}
	else
	{
		pf_print_width(finfo, ft_strlen(str));
		ft_putstr_fd(str, 1);
		finfo->total_written += ft_strlen(str);
	}
}

static	void	pf_flag_checker_id(char *str, t_info *finfo)
{
	if (finfo->width <= (int)ft_strlen(str))
		finfo->width = 0;
	if (finfo->flag_zero == 1 && finfo->flag_minus == 1)
	{
		finfo->flag_zero = 0;
		finfo->precision = -1;
	}
	if (finfo->flag_minus == 1 && finfo->precision >= 0)
		finfo->precision = -1;
	if (finfo->flag_zero == 1 && finfo->precision >= 0)
	{
		finfo->flag_zero = 0;
		finfo->precision = -1;
	}
	if (finfo->precision > (int)ft_strlen(str))
	{
		finfo->flag_zero = 1;
		finfo->width = finfo->precision;
		finfo->precision = -1;
	}
}

void			pf_solve_integer(t_info *finfo)
{
	int		num;
	char	*str;

	num = va_arg(finfo->ap, int);
	str = ft_itoa(num);

	pf_flag_checker_id(str, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true_id(num, str, finfo);
	else
		printf_minus_false_id(num, str, finfo);
	free(str);
	finfo->format++;
}
