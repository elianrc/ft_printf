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

	printf("\n----------------------------  Testing ft_printf [ String ]  ----------------------------- \n\n");

	char	*s, *s1, *null;

	s = "HelloWorld";
	s1 = "Mundo";
	ft_printf("%s\n" , "|01| Just string");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%s|", s));

	ft_printf("%s\n" , "|02|  Flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%-s|", s));

	ft_printf("%s\n" , "|03| Width 01 digit");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%3s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%3s|", s));

	ft_printf("%s\n" , "|04| Width 01 digit, less than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%3s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%3s|", s));

	ft_printf("%s\n" , "|05| Width greater than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%12s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%12s|", s));

	ft_printf("%s\n" , "|06| Width greater than strlen and flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-8s|", s1));
	//printf(" LENGTH printf    : %d\n\n", printf("|%-8s|", s1));

	ft_printf("%s\n" , "|06| Width less than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%4s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%4s|", s));


	ft_printf("%s\n" , "|07| Precision less than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.3s|", s1));
	//printf(" LENGTH printf    : %d\n\n", printf("|%.3s|", s1));

	ft_printf("%s\n" , "|08| Precision greater than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.15s|", s1));
	//printf(" LENGTH printf    : %d\n\n", printf("|%.15s|", s1));

	ft_printf("%s\n" , "|09| Precision less than strlen and flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-.2s|", s1));
	//printf(" LENGTH printf    : %d\n\n", printf("|%-.2s|", s1));

	ft_printf("%s\n" , "|10| Precision greater than strlen and flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-.8s|", s1));
	//printf(" LENGTH printf    : %d\n\n", printf("|%-.8s|", s1));

	ft_printf("%s\n" , "|11| Precision greater than strlen and flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-.8s|", s1));
	//printf(" LENGTH printf    : %d\n\n", printf("|%-.8s|", s1));

	ft_printf("%s\n" , "|12| Precision greater than strlen and flag [-], and width greater than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-7.8s|", s1));
	//printf(" LENGTH printf    : %d\n\n", printf("|%-7.8s|", s1));

	ft_printf("%s\n" , "|13| Just point");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%.s|", s));

	ft_printf("%s\n" , "|14| Just point with error in precision");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.s|", s));
	//printf(" LENGTH printf    : %d\n\n", printf("|%.s|", s));
	
	ft_printf("%s\n" , "|15| Flag [0]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%08.7s|", "Hello"));
	//printf(" LENGTH printf    : %d\n\n", printf("|%08.7s|", "Hello"));

	// BUGS
	ft_printf("%s\n" , "|16| Just point with null string and in precision");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.2s|", null));
	//printf(" LENGTH printf    : %d\n\n", printf("|%.2s|", null));

	return (0);
}