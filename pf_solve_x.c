/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:40:03 by erc               #+#    #+#             */
/*   Updated: 2020/08/11 22:51:06 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts an unsigned integer to hexadecimal representation.
*/

#include "ft_printf.h"

void	pf_solve_hexadecimal(t_info *finfo)
{
	char	*num;

	num = ft_utoa_hex(va_arg(finfo->ap, unsigned int), finfo);
	ft_putstr_fd(num, 1);
	finfo->total_written += ft_strlen(num);
	finfo->format++;
}
