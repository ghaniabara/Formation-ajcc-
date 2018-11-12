#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;

int T[30]={0};
T[0]=1;
printf("%d\n", T[0]);

for (i=1; i<30; i++) //essayer for (i=1; i<33; i++)
{
    // if (i==0)
         //{
         //T[0]=1;
         //printf("%d\n", T[0]);
         //}

    //else
    //{
         T[i]=T[i-1]*2;
         printf("%d\n", T[i]);
   // }

}
    return 0;
}
