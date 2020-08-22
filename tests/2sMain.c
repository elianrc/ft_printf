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
	// system("clear");

	printf("\n-------------------------------------\n--------  Testing ft_printf  --------\n--------    Flags Testing    --------\n-------------------------------------\n\n");


    // printf("|%-*.*s|\n", 5, 2, "JESUS");
    // char    *s1;
    // char    *s2 = "JESUS";
    // printf("#1 - %%s(null) & %%s\n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("%s && %s\n", s1, s2));
    // printf("Total Written:(printf) %d\n\n", printf("%s && %s\n", s1, s2));

    // printf("\n\t------------\n\n");
    
    // printf("#2 - %%s(null) && %%.3s\n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("%s && %.3s\n", s1, s2));
    // printf("Total Written:(printf) %d\n\n", printf("%s && %.3s\n", s1, s2));

    // printf("\n\t------------\n\n");
    
    // printf("#3 - %%10.3s\n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%10.3s|\n", s2));
    // printf("Total Written:(printf) %d\n\n", printf("|%10.3s|\n", s2));

    // printf("\n\t------------\n\n");
    
    // printf("#4 - %%-10.3s\n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%-10.3s|\n", s2));
    // printf("Total Written:(printf) %d\n\n", printf("|%-10.3s|\n", s2));

    // printf("\n\t------------\n\n");
    
    // printf("#5 - %%-*.3s\n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%-*.3s|\n",10, s2));
    // printf("Total Written:(printf) %d\n\n", printf("|%-*.3s|\n",10, s2));

    // printf("\n\t------------\n\n");
    
    // printf("#6 - %%-*.*s\n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%-*.*s|\n",10, 3, s2));
    // printf("Total Written:(printf) %d\n\n", printf("|%-*.*s|\n",10, 3, s2));

    // printf("#7 - %%4s\n\n");
    // ft_printf("Total Written:(ft_printf) %d\n", ft_printf("|%4s|\n", s2));
    // printf("Total Written:(printf) %d\n\n", printf("|%4s|\n", s2));

    // char c1 = 'X';
    // char c2 = '0';

    // int d1 = 2;
    // int d2;
    // printf("|%7.7s%7.3s|\n", "hello", "world");
    // ft_printf("|%7.7s%7.3s|\n", "hello", "world");

    // printf("|%-5.d|\n", 0);
    // ft_printf("|%-5.d|\n", 0);

    // printf("|%.6s|\n", s1); // (null)
    // ft_printf("|%.6s|\n", s1);

    // printf("|%010d|\n", -12345);
    // ft_printf("|%010d|\n", -12345);






    // ft_printf("this %d number", 0);

    // ft_printf("%0-8.3d", -8473);
    // printf("%0-8.3d", -8473);

    // ft_printf("|%5%|\n");
    // printf("|%05%|\n");

    // unsigned  int num = 1000;
    // printf("%X\n", num);

    // char *p;

    // ft_printf("%p", &p);

    // ft_printf("%08.5X", 34);
    // printf("%08.5X", 34);

    // ft_printf("%08.5u", 34);
    // printf("%08.5u", 34);

    // ft_printf("%3.3s%7.3s", "hello", "world");
    // printf("|%3.3s%7.3s|\n", "hello", "world");

    // ft_printf("%*s", -32, "abc");
    // printf("%*s", -32, "abc");

    ft_printf("%10.5d", -216);
    printf("%10.5d", -216);



  





    // printf("|%.3s|\n", "elian");
    // ft_printf("|%.3s|\n", "elian");









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