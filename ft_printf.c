/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:47:22 by erc               #+#    #+#             */
/*   Updated: 2020/08/12 23:14:46 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**__Core of the function__
**-Understanding <stdarg.h> is a first.
**-"finfo" stands for "format info".
**-Only working on mandatory part for now.
*/

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_info	*finfo;
	int		total_written;

	if (!format)
		return (-1);
	finfo = (t_info *)ft_memalloc(sizeof(t_info));
	va_start(finfo->ap, format);
	finfo->format = format;
	while (*finfo->format)
	{
		while (*finfo->format && *finfo->format != '%')
		{
			ft_putchar_fd(*finfo->format, 1);
			finfo->total_written++;
			finfo->format++;
		}
		if (*finfo->format == '%')
			pf_analyze_format(finfo);
	}
	va_end(finfo->ap);
	total_written = finfo->total_written;
	free(finfo);
	return (total_written);
}
