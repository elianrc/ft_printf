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

	//_____SPECIFIER C ______

	printf("--- spec c ---\n");
	char c = 'X';
	ft_printf("Total written(ft_printf): %d\n\n", (ft_printf("This is char: %c\n",c)));
	printf("Total written(printf): %d\n", (printf("This is char: %c\n",c)));
	printf("--------------\n\n\n\n");

	//_______________________

	//_____SPECFIER S _______

	printf("--- spec s ---\n");
	char *str = "I love Chasty!";
	ft_printf("Total written(ft_printf): %d\n\n", (ft_printf("This is string: %s\n", str)));
	printf("Total written(printf): %d\n", (printf("This is string: %s\n", str)));
	printf("--------------\n\n\n\n");

	//_______________________

	//_____SPECFIER i & d ___
	printf("-- spec i&d --\n");
	int	n1 = 1124;
	int n2 = 411;
	ft_printf("Total written(ft_printf): %d\n\n", (ft_printf("This is integer: %d & %i\n", n1, n2)));
	printf("Total written(printf): %d\n", (printf("This is integer: %d & %i\n", n1, n2)));
	printf("--------------\n\n\n\n");
	//_______________________

	//_____ SPECFIER u ______
	printf("--- spec u ---\n");
	unsigned int un1 = 1424;
	ft_printf("Total written(ft_printf): %d\n\n", (ft_printf("This is unsigned integer: %u\n", un1)));
	printf("Total written(printf): %d\n", (printf("This is unsigned integer: %u\n", un1)));
	printf("--------------\n\n\n\n");
	//_______________________

	//____ SPECFIER x & x ___
	printf("-- spec x&X --\n");
	int	hex1 = 2124;
	int	hex2 = 2530;
	ft_printf("Total written(ft_printf): %d\n\n", (ft_printf("This is hexadecimal: %x & %X\n", hex1, hex2)));
	printf("Total written(printf): %d\n", (printf("This is hexadecimal: %x & %X\n", hex1, hex2)));
	printf("--------------\n\n\n\n");
	//_______________________


	ft_printf("This is percent: %%\n");
	ft_printf("This is error: %z\n\n");

	return (0);
}
