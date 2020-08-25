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

	printf("\n----------------------------  Testing ft_printf [ Hexadecimal ]  ----------------------------- \n\n");

	ft_printf("%s\n" , "~02~ Hexadecimal number width flag [0] and width");
	ft_printf(" LENGTH printf    : %d\n", ft_printf("|%05x|", 43));

	ft_printf("%x\n",4294967295u);

	ft_printf("%x\n",33);

	ft_printf("%X\n",94827);

	return (0);
}