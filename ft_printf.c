/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:47:22 by erc               #+#    #+#             */
/*   Updated: 2020/08/05 12:25:58 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_info	*info;

	if (!format)
		return (-1);
	va_start(info->ap, format);
	info->format = format;
	while (*info->format)
	{
		while (*info->format && *info->format != '%')
		{
			write(1, info->format, 1);
			info->total_written++;
		}
		if (*info->format == '%')
			pf_analyze_format(info->format++);
	}
	va_end(info->ap);
	return (info->total_written);
}
