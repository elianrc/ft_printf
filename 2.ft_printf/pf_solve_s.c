/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/25 14:28:24 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a character string.
*/

#include "ft_printf.h"

static	void	pf_flag_checker_s(int strlen, char *str, t_info *finfo)
{
	if (finfo->width <= (int)ft_strlen(str  - finfo->precision))
		finfo->width = 0;
	if (finfo->precision > strlen)
		finfo->precision = strlen;
	if (finfo->flag_zero == 1)
		finfo->flag_zero = 0;
}

void			pf_solve_string(t_info *finfo)
{
	char		*str;
	int			strlen;

	str = va_arg(finfo->ap, char *);
	if (!str)
	{
		str = "(null)";
		if (!IS_MACOS && finfo->precision < 6 && finfo->precision >= 0)
			str = "";
	}
	if (finfo->precision == 0)
		str = "";
	strlen = (int)ft_strlen(str);
	pf_flag_checker_s(strlen, str, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(str, finfo);
	else
		printf_minus_false(str, finfo);
	finfo->format++;
}
