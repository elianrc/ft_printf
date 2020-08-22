/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_perc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:43:20 by erc               #+#    #+#             */
/*   Updated: 2020/08/21 23:35:52 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	pf_flag_checker_perc(t_info *finfo)
{
	if (finfo->width <= 1)
		finfo->width = 0;
	if (finfo->flag_zero == 1)
		finfo->flag_zero = 0;
}

void			pf_solve_perc(t_info *finfo)
{
	if (IS_MACOS)
	{
		pf_flag_checker_perc(finfo);
		if (finfo->flag_minus == 1)
		{
			finfo->total_written += ft_putnchar('%', 1);
			pf_print_width(finfo, 1);
		}
		else
		{
			pf_print_width(finfo, 1);
			finfo->total_written += ft_putnchar('%', 1);
		}
	}
	else
		finfo->total_written += ft_putnchar('%', 1);
	finfo->format++;
}