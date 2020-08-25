/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:24:34 by erc               #+#    #+#             */
/*   Updated: 2020/08/25 13:10:06 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnchar(char c, int n)
{
	int	total_written;

	total_written = 0;
	while (n-- > 0)
	{
		ft_putchar_fd(c, 1);
		total_written++;
	}
	return (total_written);
}
