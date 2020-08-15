/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_analyze_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 14:22:31 by erc               #+#    #+#             */
/*   Updated: 2020/08/14 23:11:20 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**%[flags][width][.precision][length]specifier
*/

#include "ft_printf.h"

void	pf_analyze_flag(t_info *finfo)
{
	if (*finfo->format == '-')
	{
		finfo->flag_minus = 1;
		finfo->format++;
	}
	if (*finfo->format == '0')
	{
		finfo->flag_zero = 1;
		finfo->format++;
	}	
}
