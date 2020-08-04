/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_analyzer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 08:06:46 by erc               #+#    #+#             */
/*   Updated: 2020/08/04 08:42:32 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This function will analize everything
**that is after the '%' and act accordingly.
*/

#include <ft_printf.h>

void	ft_format_analyzer(const char *format)
{

	ft_putstr_fd("\nFA\n", 1);

	ft_flag_check(format);
	//check for with function
	//check for precision function
	if (*format == 'c')
		ft_putstr_fd("Convert to char", 1);
	if (*format == 's')
		ft_putstr_fd("Convert to string", 1);
	if (*format == 'p')
		ft_putstr_fd("Convert to address of pointer", 1);
	if (*format == 'd')
		ft_putstr_fd("Convert to integer d", 1);
	if (*format == 'i')
		ft_putstr_fd("Converto to integer i", 1);
	if (*format == 'u')
		ft_putstr_fd("Convert to unsigned integer", 1);
	if (*format == 'x')
		ft_putstr_fd("Convert to hexadecimal integer x", 1);
	if (*format == 'X')
		ft_putstr_fd("Convert to hexadeximal integer X", 1);
	if (*format == '%')
		ft_putchar_fd('%', 1);
	format++;
}
