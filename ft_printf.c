/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:47:22 by erc               #+#    #+#             */
/*   Updated: 2020/08/04 08:45:39 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			total;

	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		while (*format && *format != '%')
		{
			write(1, format, 1);
			total++;
			format++;
		}
		if (*format == '%')
			ft_format_analyzer(format++);
	}
	va_end(ap);
	return (total);
}
