/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 08:08:28 by erc               #+#    #+#             */
/*   Updated: 2020/08/05 12:24:16 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

typedef struct		s_info
{
	va_list		ap;
	const char	*format;
	int		total_written;
	char		flags[5];
	int		width;
	int		precision;

}			t_info;

int		ft_printf(const char *format, ...);
void    pf_analyze_format(t_info *info);
void    pf_analyze_flags(t_info *info);

#endif
