/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_solve_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:36:43 by erc               #+#    #+#             */
/*   Updated: 2020/08/11 22:50:07 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Writes a character string.
*/

#include "ft_printf.h"

void	pf_solve_string(t_info *finfo)
{
	char	*str;

	str = va_arg(finfo->ap, char *);
	ft_putstr_fd(str, 1);
	finfo->total_written += ft_strlen(str);
	finfo->format++;
}
