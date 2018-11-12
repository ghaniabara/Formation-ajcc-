#include <stdio.h>
#include <stdlib.h>


void inverser( char tab1[], char tab2[])

{
	int i, j;
	for (i=0, j=strlen(tab1)-1; i<strlen(tab2); i++,j--)
	{
        tab2[i]=tab1[j];
	}
}

int main()
{
 char tab1[]="maman";
 char tab2[]="maman";
inverser(tab1,tab2);
 //printf ("%s\n",tab);
 printf ("inverser : %s\n",tab2);

}

