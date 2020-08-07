/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 21:30:19 by erc               #+#    #+#             */
/*   Updated: 2020/08/06 21:43:20 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_solve_integer(t_info *finfo)
{
	char	*num;

	num = ft_itoa(va_arg(finfo->ap, long long));
	while (*num)
	{
		ft_putchar_fd(*num, 1);
		finfo->total_written++;
		num++;
	}
	finfo->format++;
}
