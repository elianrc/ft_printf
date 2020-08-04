/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:02:07 by erc               #+#    #+#             */
/*   Updated: 2020/08/04 08:42:26 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This functions checks for flags context
**and apply it accordingly.
*/

#include "ft_printf.h"

void	ft_flag_check(const char *format)
{
	
	ft_putstr_fd("\nFG\n", 1);

	if (*format == '-')
	{
		ft_putstr_fd("(minus flag)", 1);
	}
	if (*format == '0')
	{
		ft_putstr_fd("(zero flag)", 1);
	}
	if (*format == '.')
	{
		ft_putstr_fd("(dot flag)", 1);
	}
	if (*format == '*')
	{
		ft_putstr_fd("(asterik flag)", 1);
	}
    format++;
}
