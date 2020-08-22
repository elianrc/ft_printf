/*
 *
 *
 * ft_printf test
 *
 * by: Elián RC
 *
 */

#include "../ft_printf.h"
#include <stdio.h>

int main(void)
{
	system("clear");

	printf("\n-------------------------------------\n--------  Testing ft_printf  --------\n--------    Flags Testing    --------\n-------------------------------------\n\n");

    int i = 42;
    int il = 42000024;

    // printf("#1 - %%d \n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%d|\n", i));
    // printf("Total Written:(printf) %d\n\n", printf("|%0d|\n", i));

    // printf("#2 - %%5d \n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%5d|\n", i));
    // printf("Total Written:(printf) %d\n\n", printf("|%5d|\n", i));

    // printf("#3 - %%05d \n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%05d|\n", i));
    // printf("Total Written:(printf) %d\n\n", printf("|%05d|\n", i));

    // printf("#4 - %%5.3d \n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%-5.3d|\n", il));
    // printf("Total Written:(printf) %d\n\n", printf("|%-5.3d|\n", il));

    // printf("#5 - %%*.3d \n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%*.3d|\n",5, il));
    // printf("Total Written:(printf) %d\n\n", printf("|%*.3d|\n",5, il));

    // printf("#6 - %%*.*d \n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%*.*d|\n",5, 3, il));
    // printf("Total Written:(printf) %d\n\n", printf("|%*.*d|\n",5, 3, il));

    printf("|%.3d|\n", 13862);
    ft_printf("|%.3d|\n", 13862);   


    return (0);
}