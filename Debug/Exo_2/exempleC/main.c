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

double division(int x, int y, int i, int j)
{
    double a = (double)(x+y) / (i-j);
    return a;
}

int main()
{
    int i;
    int j=5;
        while (i < 10)
        {

               if (10/i-8)
               {
                  printf("Bonjour!\n");
               }

                 else
                 {
                   printf("Bonsoir!\n");

                 }  i++;
       }

    printf("résultat = %f\n", division(10, 3, 8, 8));
    return 0;
}


