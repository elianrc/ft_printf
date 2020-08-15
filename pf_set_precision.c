/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_set_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:30:44 by erc               #+#    #+#             */
/*   Updated: 2020/08/14 17:40:33 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    pf_set_precision(t_info *finfo)
{
    if (*finfo->format == '.')
    {
        finfo->format++;
        if (*finfo->format == '*')
        {
            finfo->precision = va_arg(finfo->ap, int);
        }
        else if (*finfo->format >= '0' && *finfo->format <= '9')
        {
            finfo->precision = 0;
            while (*finfo->format >= '0' && *finfo->format <= '9')
            {
                finfo->precision = (finfo->precision * 10) + (*finfo->format - '0');
                finfo->format++;
            }
        }
    }
}