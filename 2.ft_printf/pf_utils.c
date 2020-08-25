/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:31:40 by erc               #+#    #+#             */
/*   Updated: 2020/08/24 14:31:31 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_minus_true(char *str, t_info *finfo)
{
	if (finfo->precision >= 0)
	{
		finfo->negative == 1 ? finfo->total_written += ft_putnchar('-', 1) : 0;
		finfo->total_written += ft_putnchar('0', finfo->extra_zero);
		pf_printf_string_with_precision(finfo, str, finfo->precision);
		pf_print_width(finfo, finfo->precision);
	}
	else
	{
		finfo->negative == 1 ? finfo->total_written += ft_putnchar('-', 1) : 0;
		ft_putstr_fd(str, 1);
		finfo->total_written += ft_strlen(str);
		pf_print_width(finfo, ft_strlen(str));
	}
}

void	printf_minus_false(char *str, t_info *finfo)
{
	if (finfo->precision >= 0)
	{
		if (finfo->negative == 1 && finfo->width > 0 && finfo->flag_zero == 1)
		{
			finfo->total_written += ft_putnchar('-', 1);
			finfo->negative = 0;
		}
		pf_print_width(finfo, finfo->precision);
		finfo->negative == 1 ? finfo->total_written += ft_putnchar('-', 1) : 0;
		finfo->total_written += ft_putnchar('0', finfo->extra_zero);
		pf_printf_string_with_precision(finfo, str, finfo->precision);
	}
	else
	{
		if (finfo->negative == 1 && finfo->width > 0 && finfo->flag_zero == 1)
		{
			finfo->total_written += ft_putnchar('-', 1);
			finfo->negative = 0;
		}
		pf_print_width(finfo, (int)ft_strlen(str));
		finfo->negative == 1 ? finfo->total_written += ft_putnchar('-', 1) : 0;
		ft_putstr_fd(str, 1);
		finfo->total_written += ft_strlen(str);
	}
}

void	pf_reset_flags(t_info *finfo)
{
	finfo->flag_minus = 0;
	finfo->flag_zero = 0;
	finfo->width = 0;
	finfo->precision = -1;
	finfo->extra_zero = 0;
	finfo->null = 0;
	finfo->negative = 0;
}
