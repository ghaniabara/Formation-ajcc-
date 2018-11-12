#include <stdio.h>
#include <stdlib.h>

int ASCII(char car)
{

int x=65+(car-'A');
return x ;

}


int main()
{


printf("car B = %d\n",ASCII('B'));
printf("car z = %d\n",ASCII('z'));
     return 0;
}

