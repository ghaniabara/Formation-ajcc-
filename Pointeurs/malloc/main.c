#include <stdio.h>

int main()
{
    char *p;
    p=(char*)malloc(1);
    *p='a';
    printf("%c\n",*p);
    printf("adresse %p\n",p);
    free(p);
    free(p);

    return 0;

}
