/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:39:23 by erc               #+#    #+#             */
/*   Updated: 2020/08/11 22:50:37 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts an unsigned integer to decimal representation.
*/

#include "ft_printf.h"

void	pf_solve_unsigned(t_info *finfo)
{
	char	*num;

	num = ft_utoa(va_arg(finfo->ap, unsigned int));
	ft_putstr_fd(num, 1);
	finfo->total_written += ft_strlen(num);
	finfo->format++;
}
