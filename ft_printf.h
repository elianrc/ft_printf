/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 08:08:28 by erc               #+#    #+#             */
/*   Updated: 2020/08/08 11:16:56 by erc              ###   ########.fr       */
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
	int			total_written;
}					t_info;

int		ft_printf(const char *format, ...);
void	pf_analyze_format(t_info *finfo);
void	pf_solve_character(t_info *finfo);
void	pf_solve_string(t_info *finfo);
void	pf_solve_integer(t_info *finfo);
void	pf_solve_unsigned(t_info *finfo);
void	pf_solve_hexadecimal(t_info *finfo);
void	pf_solve_percent(t_info *finfo);

#endif
