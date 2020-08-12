/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:53 by erc               #+#    #+#             */
/*   Updated: 2020/08/11 22:45:59 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a single character.
*/

#include "ft_printf.h"

void	pf_solve_character(t_info *finfo)
{
	char	c;

	c = va_arg(finfo->ap, int);
	ft_putchar_fd(c, 1);
	finfo->total_written++;
	finfo->format++;
}
