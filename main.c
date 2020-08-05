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
	system("clear");

	printf("\n-------------------------------------\n--------  Testing ft_printf  --------\n-------------------------------------\n\n");

	char *test = "F L A G S\n";
	printf("This is usign: %s", test);

	return (0);
}
