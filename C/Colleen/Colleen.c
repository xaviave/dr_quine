#include <stdio.h>

/*
	Raindrops
*/

int			drop_tops()
{
	return (0);
}

int			main()
{
	/*
		Smokin' on cookie in the hotbox
	*/
	char	*s1 = "#include <stdio.h>%1$c%1$c/*%1$c%2$cRaindrops%1$c*/%1$c%1$cint%2$c%2$c%2$cdrop_tops()%1$c{%1$c%2$creturn (0);%1$c}%1$c%1$cint%2$c%2$c%2$cmain()%1$c{%1$c%2$c/*%1$c%2$c%2$cSmokin' on cookie in the hotbox%1$c%2$c*/%1$c%2$cchar%2$c*s1 = %3$c%4$s%3$c;%1$c%1$c%2$cdrop_tops();%1$c%2$cprintf(s1, 10, 9, 34, s1);%1$c%2$creturn (0);%1$c}%1$c";

	drop_tops();
	printf(s1, 10, 9, 34, s1);
	return (0);
}
