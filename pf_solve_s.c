/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/22 09:09:32 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a character string.
*/

#include "ft_printf.h"

static	void	pf_flag_checker_s(char *str, t_info *finfo)
{
	if (finfo->width <= (int)ft_strlen(str - finfo->precision))
		finfo->width = 0;
	if (finfo->precision > (int)ft_strlen(str))
		finfo->precision = (int)ft_strlen(str);
	if (finfo->flag_zero == 1)
		finfo->flag_zero = 0;
}

void			pf_solve_string(t_info *finfo)
{
	char		*str;

	str = va_arg(finfo->ap, char *);
	if (!str)
	{
		str = "(null)";
		if (!IS_MACOS && finfo->precision < 6 && finfo->precision >= 0)
			str = "";
	}
	if (finfo->precision == 0)
		str = "";
	pf_flag_checker_s(str, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(str, finfo);
	else
		printf_minus_false(str, finfo);
	finfo->format++;
}
