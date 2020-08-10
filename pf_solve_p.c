/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 00:39:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/09 23:52:25 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This file contains two functions:
**-pf_solve_percent
**-pf_solve_pointer
*/

#include "ft_printf.h"

void	pf_solve_percent(t_info *finfo)
{
	ft_putchar_fd('%', 1);
	finfo->total_written++;
	finfo->format++;
}

// void	pf_solve_pointer(t_info *finfo)
// {
// }
