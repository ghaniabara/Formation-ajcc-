#include <stdio.h>
#include <stdlib.h>
#include <operations.h>

int     addition(int a, int b)
{
        int resultat;

        resultat = a + b;
        return (resultat);
}

int     main(int argc, char *argv[])
{
        int a, b , resultat;

        a = 5;
        b = 10;
        resultat = addition(a, b);
        printf("%d + %d = %d\n", a, b, resultat);
        float a = 25;
        float c = 38;
        printf("la division de %d par %d est %d",a,c,division(c,a));
