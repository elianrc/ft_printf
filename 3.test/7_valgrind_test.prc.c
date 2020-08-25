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

	printf("\n----------------------------  Testing ft_printf [ Percent ]  ----------------------------- \n\n");

	ft_printf("%5%\n");

	ft_printf("%-5%\n");

	ft_printf("%05%\n");

	ft_printf("%-05%\n");

	ft_printf("%-05%\n\n");

}