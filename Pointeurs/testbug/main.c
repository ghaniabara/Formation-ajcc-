#include <stdio.h>

void main()
{
    int *p;
    {
        int i=5;
        printf("%p\n",&i);
        p=&i;
        printf("%d\n",*p);
    }

    int j;
    printf("%d\n",*p);
    printf("%p\n",&j);

}
