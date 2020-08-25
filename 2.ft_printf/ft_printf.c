/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:47:22 by erc               #+#    #+#             */
/*   Updated: 2020/08/25 13:08:31 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Recode of stdio library, printf().
**
**  This function manages the following conversions: cspdiuxX%
**
**	It also manages any combinations of the
**	following flags: -0.* and minimum field width
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
