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

	char c = 'X';
	ft_printf("This is char: %c\n\n",c);

	char *str = "I love Chasty!";
	ft_printf("This is string: %s\n\n", str);

	int	n1 = 1124;
	int n2 = 411;
	ft_printf("This is integer: %d & %i\n\n", n1, n2);

	

	return (0);
}
