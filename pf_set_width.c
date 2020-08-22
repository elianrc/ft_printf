/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_set_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 00:00:52 by erc               #+#    #+#             */
/*   Updated: 2020/08/21 12:47:37 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_set_width(t_info *finfo)
{
	if (*finfo->format == '*')
	{
		finfo->width = va_arg(finfo->ap, int);
		if (finfo->width < 0)
		{
			finfo->flag_minus = 1;
			finfo->width *= -1;
		}
		finfo->format++;
	}
	else if (*finfo->format >= '0' && *finfo->format <= '9')
	{
		finfo->width = 0;
		while (*finfo->format >= '0' && *finfo->format <= '9')
		{
			finfo->width = (finfo->width * 10) + (*finfo->format - '0');
			finfo->format++;
		}
	}
}

void	pf_print_width(t_info *finfo, int length)
{
	while (finfo->width > length && finfo->width != 0)
	{
		if (finfo->flag_zero == 1)
		{
			ft_putchar_fd('0', 1);
			finfo->total_written++;
		}
		else
		{
			ft_putchar_fd(' ', 1);
			finfo->total_written++;
		}
		finfo->width--;
	}
}
