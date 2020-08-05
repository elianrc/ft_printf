/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_analyze_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:09:40 by erc               #+#    #+#             */
/*   Updated: 2020/08/04 21:15:50 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This function will analize everything
**that is after the '%' and act accordingly.
*/

#include <ft_printf.h>

void	ft_analyze_format(const char *format)
{
	pf_analyze_flags(format);
	if (*format == 'c')
	if (*format == 's')
	if (*format == 'p')
	if (*format == 'd')
	if (*format == 'i')
	if (*format == 'u')
	if (*format == 'x')
	if (*format == 'X')
	if (*format == '%')
}