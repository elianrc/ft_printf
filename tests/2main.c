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

int main(void)
{
	system("clear");

	printf("\n-------------------------------------\n--------  Testing ft_printf  --------\n--------    Flags Testing    --------\n-------------------------------------\n\n");



    int c = 'C';

    // ft_printf("|%c| |%*c| |%-*c|\n", c, 5, c, 5, c);
    // // ft_printf("|%*c|\n",5, c);
    // // ft_printf("|%-*c|\n",5, c);

    // ft_printf("|%55c|\n", c);
    // printf("\n|%55c|\n", c);



    ft_printf("Total Written:(ft_printf) %d\n\n", ft_printf("Character Flags: |%*c|\n", 5, c));
    printf("Total Written:(printf) %d\n\n", printf("Character Flags: |%*c|\n", 5, c));

    ft_printf("Total Written:(ft_printf) %d\n\n", ft_printf("Character Flags: |%-*c|\n", 5, c));
    printf("Total Written:(printf) %d\n\n", printf("Character Flags: |%-*c|\n", 5, c));

    ft_printf("Total Written:(ft_printf) %d\n\n", ft_printf("Character Flags: |%5c|\n", c));
    printf("Total Written:(printf) %d\n\n", printf("Character Flags: |%5c|\n", c));
}