#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car = 'A' ;
    do

      for (car='A'; car<='z'; car=car+2)
    {

        //printf("car = %c\n",car);
        //printf("car = %d\n",car);
        //printf("%c = %d\n", car, car );
        printf("%c = %d\t" "%c = %d\t" "%c = %d\n", car, car, car+1, car+1, car+2, car+2);

            car=car+1;

     }

        while (car <= 'z');


     return 0;
}
