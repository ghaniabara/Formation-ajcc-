#include <stdio.h>
#include <stdlib.h>


char * test( char tab[] )
{
int i;
//int tab[i];

i=0;
if (tab[0] == '\0')
return (0);

while (tab[i] != '\0')
{
 if (tab[i]>='a' && tab[i]<='z')
 tab[i]=tab[i]-32;

 else if (tab[i]>='A' && tab[i]<='Z')
 tab[i]=tab[i]+32;

 i=i+1;
}
return(tab);
}

int main()
{
char tab[]="BONjour A TOUS";
printf ("test : %s\n",test(tab));
}
