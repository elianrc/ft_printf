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
    printf("\n-------------------------------------\n--------  Testing ft_printf  --------\n-------------------------------------\n\n");

    int num;

    // ft_printf("|%1d|\n", num);
    // printf("|%1d|\n\n", num);

    // ft_printf("|%9.p|\n", 1234);
    // printf("|%9.p|\n", 1234);

    // ft_printf("|%-6.13s|\n", "abc");
    // printf("|%-6.13s|\n", "abc");

    // ft_printf("|%-5.d|\n", 0);
    // printf("|%-5.d|\n", 0);

    ft_printf("|%0*.*d|\n", 1, 0, 0);
    printf("|%0*.*d|\n", 1, 0, 0);


    return (0);
}