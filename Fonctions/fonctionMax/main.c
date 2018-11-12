#include <stdio.h>
#include <stdlib.h>

int max(int v1,int v2)
{
    if (v1>v2)
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

int vmax =max(v1,v2);
printf("vamx = %d",vmax);
    return (0);
}
