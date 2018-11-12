
#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
int cpt=0;
int nbror=1;

printf("entrez un nombre d'or de 0 et 100 nbror = ");
scanf("%d",&nbror);
printf("nbror = %d\n",nbror);

while (i != nbror) {
          printf("entrez un entier entre 0 et 100 i = ");
          scanf("%d",&i);
          printf("i = %d\n",i);

           if (i > nbror)
              printf("le nombre d'or est plus petit\n");

           else if (i < nbror)
                printf("le nombre d'or est plus grand\n");
           cpt++; }

printf("bravo\n");
printf("cpt = %d\n",cpt);
return 0;
}
