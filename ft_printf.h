/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 08:08:28 by erc               #+#    #+#             */
/*   Updated: 2020/08/22 09:16:36 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

# define INT_MIN -2147483648

typedef struct		s_info
{
	va_list		ap;
	const char	*format;
	int			flag_minus;
	int			flag_zero;
	int			width;
	int			precision;
	int			extra_zero;
	int			null;
	int			negative;
	int			total_written;
}					t_info;

int					ft_printf(const char *format, ...);
void				pf_analyze_format(t_info *finfo);
void				pf_reset_flags(t_info *finfo);
void				pf_analyze_flag(t_info *finfo);
void				pf_set_width(t_info *finfo);
void				pf_print_width(t_info *finfo, int length);
void				pf_set_precision(t_info *finfo);
void				print_minus_true(char *str, t_info *finfo);
void				printf_minus_false(char *str, t_info *finfo);
void				pf_solve_character(t_info *finfo);
void				pf_solve_string(t_info *finfo);
void				pf_printf_string_with_precision(t_info *finfo,
		char *str, int precision);
void				pf_solve_integer(t_info *finfo);
void				pf_solve_unsigned(t_info *finfo);
void				pf_solve_hexadecimal(t_info *finfo);
void				pf_solve_perc(t_info *finfo);
void				pf_solve_pointer(t_info *finfo);

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

#endif
