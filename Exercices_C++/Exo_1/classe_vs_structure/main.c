#include <stdio.h>
#include <stdlib.h>
struct test{

    int i;

    //void clear(){i=0;}
};




int main()
{
   struct test*p;
   p=(struct test*)malloc(sizeof(struct test));
   p->i=3;
   printf("%d\n",p->i);

   //clear(test);
}

