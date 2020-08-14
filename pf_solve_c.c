/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:53 by erc               #+#    #+#             */
/*   Updated: 2020/08/14 00:40:06 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a single character.
*/

#include "ft_printf.h"

void	pf_solve_character(t_info *finfo)
{
	char	c;

	c = va_arg(finfo->ap, int);
	if (finfo->flag_minus == 1)
	{
		ft_putchar_fd(c, 1);
		finfo->total_written++;
		pf_print_width(finfo, 1);
	}
	else
	{
		pf_print_width(finfo, 1);
		ft_putchar_fd(c, 1);
		finfo->total_written++;
	}
	finfo->format++;
}
