/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/15 00:36:32 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a character string.
*/

#include "ft_printf.h"

void	pf_solve_string(t_info *finfo)
{
	char	*str;
	int		null;

	null = 0;
	str = va_arg(finfo->ap, char *);
	//if no value, set it to literal null
	if (!str)
	{
		null = 1;
		str = "(null)";
	}
	if (null != 1)
	{
		if (finfo->flag_minus == 1)
		{
			//printf the string and then print the width (left-align)
			if (finfo->precision > 0)
				pf_printf_string_with_precision(finfo, str, finfo->precision);
			else
			{
				ft_putstr_fd(str, 1);
				finfo->total_written += ft_strlen(str);
			}
			if (finfo->width > 0)
				pf_print_width(finfo, ft_strlen(str));
		}
		else
		{
			//printf the width and then the string (default right align)
			if (finfo->width > 0)
				pf_print_width(finfo, ft_strlen(str));
			if (finfo->precision > 0)
				pf_printf_string_with_precision(finfo, str, finfo->precision);
			else
			{
				ft_putstr_fd(str, 1);
				finfo->total_written += ft_strlen(str);
			}
		}
	}
	else
	{
		//printf (null)
		ft_putstr_fd(str, 1);
		finfo->total_written += ft_strlen(str);
	}
	finfo->format++;
}
