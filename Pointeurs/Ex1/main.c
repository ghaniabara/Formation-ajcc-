#include <stdio.h>
#include <stdlib.h>

int main()
{
 //   printf("Hello world!\n");
 //  return 0;
//}
char *p="ceci est une chaine";
char *q = p;
while (*q!=0)
{
 printf ("%c\n",*q);
 printf("adresse pointeure %p\n",q);
 q=q+1;
}
//printf("adresse pointeure %p\n",*p);
return 0;
}
