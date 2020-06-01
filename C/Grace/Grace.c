#include <stdio.h>

/*
	bottom now we here
*/
#define FORMAT "#include <stdio.h>%1$c%1$c/*%1$c%2$cbottom now we here%1$c*/%1$c#define FORMAT %3$c%4$s%3$c%1$c#define start(a) int main(){FILE *fd=fopen(%3$cGrace_kid.c%3$c, %3$cw%3$c);if(!fd)return 0;else fprintf(fd,a,10,9,34,a);}%1$c%1$cstart(FORMAT)%1$c"
#define start(a) int main(){FILE *fd=fopen("Grace_kid.c", "w");if(!fd)return 0;else fprintf(fd,a,10,9,34,a);}

start(FORMAT)
