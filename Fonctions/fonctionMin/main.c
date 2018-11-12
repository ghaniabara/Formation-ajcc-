#include <stdio.h>
#include <stdlib.h>

int min(int v1,int v2)
{
    if (v1<v2)
    {
       return(v1);
    }
    else

       return(v2);

}

int main()
{
int v1=3;
int v2=5;

int vmin =min(v1,v2);
printf("vmin = %d",vmin);
    return (0);
}

