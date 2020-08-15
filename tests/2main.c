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


    // printf("|%-*.*s|\n", 5, 2, "JESUS");
    char    *s1;
    char    *s2 = "JESUS";
    ft_printf("Total Written:(ft_printf) %d\n", ft_printf("%s && %s\n", s1, s2));
    printf("Total Written:(printf) %d\n\n", printf("%s && %s\n", s1, s2));

    printf("\n------------\n\n");

    ft_printf("Total Written:(ft_printf) %d\n", ft_printf("%s && %.3s\n", s1, s2));
    printf("Total Written:(printf) %d\n\n", printf("%s && %.3s\n", s1, s2));

    printf("\n------------\n\n");

    ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%10.3s|\n", s2));
    printf("Total Written:(printf) %d\n\n", printf("|%10.3s|\n", s2));

    printf("\n------------\n\n");

    ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%-10.3s|\n", s2));
    printf("Total Written:(printf) %d\n\n", printf("|%-10.3s|\n", s2));

    printf("\n------------\n\n");

    ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%-*.3s|\n",10, s2));
    printf("Total Written:(printf) %d\n\n", printf("|%-*.3s|\n",10, s2));

    printf("\n------------\n\n");

    ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%-*.*s|\n",10, 3, s2));
    printf("Total Written:(printf) %d\n\n", printf("|%-*.*s|\n",10, 3, s2));

    


    // int c = 'C';

    // ft_printf("|%c| |%*c| |%-*c|\n", c, 5, c, 5, c);
    // // ft_printf("|%*c|\n",5, c);
    // // ft_printf("|%-*c|\n",5, c);

    // ft_printf("|%-0*c|\n", 5, c);
    // printf("|%-0*c|\n", 5, c);
    // printf("\n|%55c|\n", c);

    //CHARS

    // ft_printf("Total Written:(ft_printf) %d\n\n", ft_printf("Character Flags: |%*c|\n", 5, c));
    // printf("Total Written:(printf) %d\n\n", printf("Character Flags: |%*c|\n", 5, c));

    // ft_printf("Total Written:(ft_printf) %d\n\n", ft_printf("Character Flags: |%-*c|\n", 5, c));
    // printf("Total Written:(printf) %d\n\n", printf("Character Flags: |%-*c|\n", 5, c));

    // ft_printf("Total Written:(ft_printf) %d\n\n", ft_printf("Character Flags: |%5c|\n", c));
    // printf("Total Written:(printf) %d\n\n", printf("Character Flags: |%5c|\n", c));

    //STRINGS

//    ft_printf("Total Written:(ft_printf) %d\n\n", ft_printf("String Flags: |%*s|\n", 10, "Elian"));
//     printf("Total Written:(printf) %d\n\n", printf("String Flags: |%*s|\n", 10, "Elian")); 
}