#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livre{
char auteur[50];
struct livre *suivant;
};

void relier(struct livre *original, struct livre *premier){
    original->suivant  = premier;

}
int main()
{


    struct livre *premier= malloc(sizeof( struct livre));
    strcpy(premier->auteur,"gille");
    premier->suivant=NULL;

    struct livre *deuxieme= malloc(sizeof( struct livre));
    strcpy(deuxieme->auteur,"sebastien");
    deuxieme->suivant=NULL;

    struct livre *troisieme= malloc(sizeof( struct livre));
    strcpy(troisieme->auteur,"bruno");
    troisieme->suivant=NULL;

    relier(premier,deuxieme);
    relier(deuxieme, troisieme);

    printf("%s\n",premier->suivant->auteur);
    return 0;
}
