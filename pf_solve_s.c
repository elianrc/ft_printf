/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/15 18:55:23 by erc              ###   ########.fr       */
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

	null = 0; //this will let us now if string is null
	str = va_arg(finfo->ap, char *);
	//if no value, set it to literal null
	if (!str)
	{
		null = 1;
		str = "(null)";
	}
	//if string is not null
	if (null != 1)
	{
		if (finfo->flag_minus == 1)
		{
			//printf the string and then print the width (left-align)
			if (finfo->precision > 0)
			{
				pf_printf_string_with_precision(finfo, str, finfo->precision);
				pf_print_width(finfo, finfo->precision);
			}
			else
			{
				ft_putstr_fd(str, 1);
				pf_print_width(finfo, ft_strlen(str));
				finfo->total_written += ft_strlen(str);
			}
		}
		else
		{
			//printf the width and then the string (default right align)
			if (finfo->precision > 0)
			{
				pf_print_width(finfo, finfo->precision);
				pf_printf_string_with_precision(finfo, str, finfo->precision);
			}
			else
			{
				pf_print_width(finfo, ft_strlen(str));
				ft_putstr_fd(str, 1);
				finfo->total_written += ft_strlen(str);
			}
		}
	}
	else
	{
		//print (null_)
		ft_putstr_fd(str, 1);
		finfo->total_written += ft_strlen(str);
	}
	finfo->format++;
}
