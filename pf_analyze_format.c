/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_analyze_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:09:40 by erc               #+#    #+#             */
/*   Updated: 2020/08/08 00:38:17 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This function will analize everything
**that is after the '%' and act accordingly.
*/

#include "ft_printf.h"

void	pf_analyze_format(t_info *finfo)
{
	finfo->format++;
	if (*finfo->format == 'c')
		pf_solve_character(finfo);
	else if (*finfo->format == 's')
		pf_solve_string(finfo);
	// if (*info->format == 'p')
	else if (*finfo->format == 'd' || *finfo->format == 'i')
		pf_solve_integer(finfo);
	else if (*finfo->format == 'u')
		pf_solve_unsigned(finfo);
	//else if (*finfo->format == 'x' || *finfo->format == 'X')
	else if (*finfo->format == '%')
		pf_solve_percent(finfo);
	else
	{
		ft_putstr_fd("[ERROR] - specifier not found or supported -> ", 1);
	}
}
