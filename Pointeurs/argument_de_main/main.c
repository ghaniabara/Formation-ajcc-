#include <stdio.h>
//GB : 181106
//Dans anglet "Projets" ajouter dans "command line arguments" des arguments par exemple: titi toto coucou

void main ( int argc, char **argv) //void main ( int argc, char *argv[])
{
   int i;
   for (i=0; i<argc; i++)
   {
       printf("argument %d : %s\n", i, argv[i]); //printf("argument %d : %s\n", i+1, argv[i]);
   }

}

//résultat =>
//argument 0 : nom du programme =>argv[0]
//argument 1 : titi             =>argv[1]
//argument 2 : toto             =>argv[2]
//argument 3 : coucou           =>argv[3]

