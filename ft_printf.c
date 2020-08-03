/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:47:22 by erc               #+#    #+#             */
/*   Updated: 2020/08/03 09:11:10 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int		total;
	
	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format) //iterate trough the format string
	{
		while (*format && *format != '%') //keep iterating and writing until some case
		{
			write(1, format, 1); // write to stdout the unchanged character
			total++; //count the chars written
			format++;
		}
		if (*format == '%')
		{
			//check the conversion specifier
			format++; //go to char after %
			if (*format == 'c')
			{
				char c = va_arg(ap, int);
				write (1, &c, 1);
				total++;
				format++;
			}
		}
	}
	va_end(ap);
	return (total);
}
