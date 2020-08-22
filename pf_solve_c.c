/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:53 by erc               #+#    #+#             */
/*   Updated: 2020/08/21 23:33:27 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a single character.
*/

#include "ft_printf.h"

static	void	pf_flag_checker_c(t_info *finfo)
{
	if (finfo->width <= 1)
		finfo->width = 0;
	if (finfo->flag_zero == 1)
		finfo->flag_zero = 0;
}

void			pf_solve_character(t_info *finfo)
{
	char	c;

	c = va_arg(finfo->ap, int);
	pf_flag_checker_c(finfo);
	if (finfo->flag_minus == 1)
	{
		finfo->total_written += ft_putnchar(c, 1);
		pf_print_width(finfo, 1);
	}
	else
	{
		pf_print_width(finfo, 1);
		finfo->total_written += ft_putnchar(c, 1);
	}
	finfo->format++;
}
