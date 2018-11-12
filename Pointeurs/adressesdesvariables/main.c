#include <stdio.h>

//foction
//void test(int *pa)
void *test (char c)
{
    printf("salut\n");
}

//variables globales
int j1=3;
int j2=8;
int j3=9;
char T1[]="coucou";


int main()
{
    //variables locales
    int i1=2;
    int i2=7;
    int i3=10;
    static int statiq= 5;
    char tab1[]="hello";
    const int c = 1;

    printf("l'adresse de i1 est : %p\n", &i1);
    printf("l'adresse de i2 est : %p\n", &i2);
    printf("l'adresse de i3 est : %p\n", &i3);
    printf("l'adresse de j1 est : %p\n", &j1);
    printf("l'adresse de j2 est : %p\n", &j2);
    printf("l'adresse de j3 est : %p\n", &j3);
    printf("l'adresse de statique est : %p\n", &statiq);
    printf("l'adresse de tab1 est : %p\n", &tab1[0]);
    printf("l'adresse de T1 est : %p\n", &T1[0]);
    printf("l'adresse de la constante c est : %p\n", &c);
    printf("l'adresse de la fonction test est : %p\n", &test);

    int a=1;
    printf("%d\n",a);
    int b=(a/0);
    printf("%d\n",b);

    return 0;
}

