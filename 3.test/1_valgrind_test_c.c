/*
**
** CREDIT TO: EDITH PUCCLA
**
*/

// valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-origins=yes --track-fds=yes ./a.out

#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Character ]  ----------------------------- \n\n");

	char	s;

	s = 'E';
	ft_printf("%s\n" , "|01| Just char");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%c|", s));

	ft_printf("%s\n" , "|02| Flag [-]");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%-c|", s));

	ft_printf("%s\n" , "|03| Flag [-] + Flag [0]  ~ ignoring [0]");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%-0c|", s));

	ft_printf("%s\n" , "|04| With width ");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%5c|", s));

	ft_printf("%s\n" , "|05| With width and flag[-]");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%-5c|", s));

	ft_printf("%s\n" , "[06] With width and flag[0] ");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%05c|", s));

	ft_printf("%s\n" , "[07] With width and flag[0] ");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%0c|", s));

	ft_printf("%s\n" , "[08] With width as a parameter ");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%*c|", 5, s));

	ft_printf("%s\n" , "[09] With flag [-]  and widh as a parameter");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%-4c|", s));

	ft_printf("%s\n" , "[10] With flag [-] and width as a parameter");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%-*c|", 5, s));
	//printf("LENGTH printf    : %d\n\n", printf("|%-*c|", 5, s));
	
	return (0);
}