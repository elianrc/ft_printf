/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 00:39:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/11 10:59:38 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This file contains two functions:
**-pf_solve_percent
**-pf_solve_pointer
*/

#include "ft_printf.h"

void	pf_solve_percent(t_info *finfo)
{
	ft_putchar_fd('%', 1);
	finfo->total_written++;
	finfo->format++;
}

void	pf_solve_pointer(t_info *finfo)
{
	char	*num;

	num = ft_utoa_hex_p(va_arg(finfo->ap, unsigned long long int));
	ft_putstr_fd(num, 1);
	finfo->total_written += ft_strlen(num);
	finfo->format++;
}
