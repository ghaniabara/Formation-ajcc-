#include <stdio.h>
#include <stdlib.h>

char inverser(char  tab[])
{
    int i;
    for(i=0;i<=strlen(tab)/2;i++)
    {
        (tab[i],tab[strlen(tab)-i-1]);
    }

    tab[strlen(tab)]='\0';
    return tab;
}
int main()
{
    char tab="bonjour";
    //printf("%s\n",inverser);
    printf ("inver : %s\n",inverser(tab));

    return 0;
}
