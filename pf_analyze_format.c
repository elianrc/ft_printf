/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_analyze_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:09:40 by erc               #+#    #+#             */
/*   Updated: 2020/08/05 23:48:14 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This function will analize everything
**that is after the '%' and act accordingly.
*/

#include "ft_printf.h"

void	pf_analyze_format(t_info *finfo)
{
	if (*finfo->format == 'c')
	{
		char c;
		
		c = va_arg(finfo->ap, int);
		ft_putchar_fd(c, 1);
	}
	// if (*info->format == 's')
	// if (*info->format == 'p')
	// if (*finfo->ormat == 'd')
	// if (*info->format == 'i')
	// if (*info->format == 'u')
	// if (*info->format == 'x')
	// if (*info->format == 'X')
	// if (*info->format == '%')
}
