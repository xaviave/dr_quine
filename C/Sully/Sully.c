#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NAME "Sully_%d.c"
#define COMPILE "gcc -Wall -Wextra -Werror %s -o Sully_%d ; ./Sully_%d"
#define FORMAT "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$c%1$c#define NAME %2$c%3$s%2$c%1$c#define COMPILE %2$c%4$s%2$c%1$c#define FORMAT %2$c%5$s%2$c%1$c#define PRINT(e,i) FILE *f=fopen(e,%2$cw%2$c);if(!f){free(e);exit(0);}fprintf(f,FORMAT,10,34,NAME,COMPILE,FORMAT,i);fclose(f);%1$c#define START() int main(){int i=%6$d;char *e, *g;if(i<1)return(0);if(access(%2$cSully_5.c%2$c,F_OK) != -1)i--;asprintf(&e,NAME,i);PRINT(e,i);asprintf(&g,COMPILE,e,i,i);system(g);free(e);free(g);return(0);}%1$c%1$cSTART()%1$c"
#define PRINT(e,i) FILE *f=fopen(e,"w");if(!f){free(e);exit(0);}fprintf(f,FORMAT,10,34,NAME,COMPILE,FORMAT,i);fclose(f);
#define START() int main(){int i=5;char *e, *g;if(i<1)return(0);if(access("Sully_5.c",F_OK) != -1)i--;asprintf(&e,NAME,i);PRINT(e,i);asprintf(&g,COMPILE,e,i,i);system(g);free(e);free(g);return(0);}

START()
