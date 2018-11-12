#include <stdio.h>
#include <stdlib.h>

char ASCII(int x)
{
char a = (char) x;
return a;
}

int main()
{

printf("int 70 = %c\n",ASCII(70));
printf("car 85 = %c\n",ASCII(85));
     return 0;
}
