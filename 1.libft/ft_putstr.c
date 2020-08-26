/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 15:30:32 by erc               #+#    #+#             */
/*   Updated: 2020/08/25 16:01:09 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_putstr(char *str)
{
    int total_written;

    if (!str)
		return (0);
    while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
        total_written++;
	}
    return (total_written);
}