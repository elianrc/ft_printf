/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:38:56 by erc               #+#    #+#             */
/*   Updated: 2020/08/11 22:47:12 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Converts a signed integer to decimal representation.
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
