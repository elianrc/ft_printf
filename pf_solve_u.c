/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:39:23 by erc               #+#    #+#             */
/*   Updated: 2020/08/17 21:09:31 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts an unsigned integer to decimal representation.
*/

#include "ft_printf.h"

static	void	pf_flag_checker_u(char *str, t_info *finfo)
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

void			pf_solve_unsigned(t_info *finfo)
{
	char	*num;

	num = ft_utoa(va_arg(finfo->ap, unsigned int));
	pf_flag_checker_u(num, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(num, finfo);
	else
		printf_minus_false(num, finfo);
	free(num);
	finfo->format++;
}
