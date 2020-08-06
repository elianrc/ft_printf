/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:47:22 by erc               #+#    #+#             */
/*   Updated: 2020/08/06 12:02:34 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_info	*finfo;

	if (!format)
		return (-1);
	finfo = (t_info *)ft_memalloc(sizeof(t_info));
	va_start(finfo->ap, format);
	finfo->format = format;
	while (*finfo->format)
	{
		while (*finfo->format && *finfo->format != '%')
		{
			write(1, finfo->format, 1);
			finfo->total_written++;
			finfo->format++;
		}
		if (*finfo->format == '%')
			pf_analyze_format(finfo);
	}
	va_end(finfo->ap);
	return (finfo->total_written);
}
