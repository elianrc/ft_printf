/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:39:23 by erc               #+#    #+#             */
/*   Updated: 2020/08/21 18:21:21 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts an unsigned integer to decimal representation.
*/

#include "ft_printf.h"

static	void	pf_flag_checker_u(int strlen, char *str, t_info *finfo)
{
	if (finfo->precision != -1 && finfo->precision < strlen && *str != '0')
		finfo->precision = strlen;
	if (finfo->flag_zero == 1 && finfo->flag_minus == 1)
		finfo->flag_zero = 0;
	if (finfo->flag_zero == 1 && finfo->precision > 0)
		finfo->flag_zero = 0;
}

void			pf_solve_unsigned(t_info *finfo)
{
	char	*str;
	int		strlen;

	str = ft_utoa(va_arg(finfo->ap, unsigned int));
	strlen = ft_strlen(str);
	if (finfo->precision > strlen)
		finfo->extra_zero = finfo->precision - strlen;
	pf_flag_checker_u(strlen, str, finfo);
	if (finfo->flag_minus == 1)
		print_minus_true(str, finfo);
	else
		printf_minus_false(str, finfo);
	free(str);
	finfo->format++;
}
