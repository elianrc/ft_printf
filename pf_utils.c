/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:31:40 by erc               #+#    #+#             */
/*   Updated: 2020/08/17 23:08:18 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_minus_true(char *str, t_info *finfo)
{
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

void	printf_minus_false(char *str, t_info *finfo)
{
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

void	pf_reset_flags(t_info *finfo)
{
	finfo->flag_minus = 0;
	finfo->flag_zero = 0;
	finfo->width = 0;
	finfo->precision = -1;
	finfo->null = 0;
}
