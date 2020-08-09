/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_i_d_u_x_X.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:13:18 by erc               #+#    #+#             */
/*   Updated: 2020/08/08 20:17:42 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This file contains three functions:
**-pf_solve_integer (%i & %d are treated equal)
**-pf_solve_unsigned
**-pf_solve_hexadecimal (x & X are treated equal)
*/

#include "ft_printf.h"

void	pf_solve_integer(t_info *finfo)
{
	char	*num;

	num = ft_itoa(va_arg(finfo->ap, int));
	ft_putstr_fd(num, 1);
	finfo->total_written += ft_strlen(num);
	finfo->format++;
}

void	pf_solve_unsigned(t_info *finfo)
{
	char	*num;

	num = ft_utoa(va_arg(finfo->ap, unsigned int));
	ft_putstr_fd(num, 1);
	finfo->total_written += ft_strlen(num);
	finfo->format++;
}

void	pf_solve_hexadecimal(t_info *finfo)
{
	char	*num;

	num = ft_utoa_hex(va_arg(finfo->ap, unsigned int), finfo);
	ft_putstr_fd(num, 1);
	finfo->total_written += ft_strlen(num);
	finfo->format++;
}
