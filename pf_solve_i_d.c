/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:38:56 by erc               #+#    #+#             */
/*   Updated: 2020/08/18 09:32:09 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts a signed integer to decimal representation.
*/

#include "ft_printf.h"

static	void	pf_flag_checker_id(char *str, t_info *finfo)
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
	if (finfo->precision > (int)ft_strlen(str))
		finfo->width = (int)ft_strlen(str);
}

void			pf_solve_integer(t_info *finfo)
{
	char	*num;

	num = ft_itoa(va_arg(finfo->ap, int));
	pf_flag_checker_id(num, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(num, finfo);
	else
		printf_minus_false(num, finfo);
	free(num);
	finfo->format++;
}
