/*
 *
 *
 * ft_printf test
 *
 * by: Elián RC
 *
 */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...);

int main(void)
{
	//system("clear");

	printf("\n-------------------------------------\n--------  Testing ft_printf  --------\n-------------------------------------\n\n");
	char c = 'X';
	ft_printf("Hello %c\n", c);

	return (0);
}
