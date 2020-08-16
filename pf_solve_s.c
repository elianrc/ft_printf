/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/15 21:58:18 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a character string.
*/

#include "ft_printf.h"

static	void	print_minus_true(char *str, t_info *finfo)
{
	if (finfo->precision > 0)
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

static	void	printf_minus_false(char *str, t_info *finfo)
{
	if (finfo->precision > 0)
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

void			pf_solve_string(t_info *finfo)
{
	char		*str;

	str = va_arg(finfo->ap, char *);
	if (!str)
	{
		finfo->null = 1;
		str = "(null)";
	}
	if (finfo->null != 1)
	{
		if (finfo->flag_minus == 1)
			print_minus_true(str, finfo);
		else
			printf_minus_false(str, finfo);
	}
	else
	{
		ft_putstr_fd(str, 1);
		finfo->total_written += ft_strlen(str);
	}
	finfo->format++;
}
