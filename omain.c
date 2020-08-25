#include "2.ft_printf/ft_printf.h"
#include <stdio.h>

int main(void)
{
    ft_printf("|%3.1s|\n", "hidden");
    printf("|%3.1s|\n", "hidden");

    return (0);
}