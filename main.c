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

	unsigned int un1 = 1424;
	ft_printf("This is unsigned integer: %u\n\n", un1);

	ft_printf("This is percent: %%\n\n");

	ft_printf("This is error: %z\n\n");

	return (0);
}
