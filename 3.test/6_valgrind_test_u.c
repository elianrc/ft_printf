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

	printf("\n----------------------------  Testing ft_printf [ Unsigned ]  ----------------------------- \n\n");

	ft_printf("|%*.-5u|\n", 453);

	ft_printf("|%p|\n", NULL);

	ft_printf("|%5p|\n", 0);

	ft_printf("|%08.5u|\n", 34);

	ft_printf("|%-1u|\n", 34);

	ft_printf("|%.1u|\n", 34);

	ft_printf("|%-8.7u|\n", 4);

	return (0);
}
