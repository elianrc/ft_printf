/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_c_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 00:38:45 by erc               #+#    #+#             */
/*   Updated: 2020/08/08 00:38:49 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_solve_character(t_info *finfo)
{
	char	c;

	c = va_arg(finfo->ap, int);
	ft_putchar_fd(c, 1);
	finfo->total_written++;
	finfo->format++;
}

void	pf_solve_string(t_info *finfo)
{
	char	*str;

	str = va_arg(finfo->ap, char *);
	ft_putstr_fd(str, 1);
	finfo->total_written += ft_strlen(str);
	finfo->format++;
}
