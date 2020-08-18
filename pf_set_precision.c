/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_set_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:30:44 by erc               #+#    #+#             */
/*   Updated: 2020/08/18 10:07:37 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_set_precision(t_info *finfo)
{
	if (*finfo->format == '.')
	{
		finfo->format++;
		if (*finfo->format == '*')
		{
			finfo->precision = va_arg(finfo->ap, int);
			finfo->format++;
		}
		else if (*finfo->format >= '0' && *finfo->format <= '9')
		{
			finfo->precision = 0;
			while (*finfo->format >= '0' && *finfo->format <= '9')
			{
				finfo->precision = (finfo->precision * 10)
					+ (*finfo->format - '0');
				finfo->format++;
			}
		}
		else
			finfo->precision = 0;
	}
}

void	pf_printf_string_with_precision(t_info *finfo, char *str, int precision)
{
	int i;

	i = 0;
	while (str[i] && i < precision)
	{
		ft_putchar_fd(str[i], 1);
		i++;
		finfo->total_written++;
	}
}
