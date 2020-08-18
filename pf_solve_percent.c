/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:41:38 by erc               #+#    #+#             */
/*   Updated: 2020/08/16 16:34:32 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_solve_percent(t_info *finfo)
{
	if (finfo->flag_minus == 1)
	{
		ft_putchar_fd('%', 1);
		finfo->total_written++;
		pf_print_width(finfo, 1);
	}
	else
	{
		pf_print_width(finfo, 1);
		ft_putchar_fd('%', 1);
		finfo->total_written++;
	}
	finfo->format++;
}
