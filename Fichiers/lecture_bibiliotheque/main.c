#include <stdio.h>



typedef struct TypeLivre {
    char auteur[200];
    char titre[200];
    short an;
    struct TypeLivre *suivant;
} LIV;

void recupfichier (LIV *premier)

 {
     FILE *fichier;
     fichier = fopen ("bib.txt", "r");

     if (fichier==NULL)
     {
         printf("error");
     }
     else
       {
        LIV *q=premier;


     //unsigned size_t fread(void *adresse,size_t taillebloc, size_t nombreblocs,FILE *fp);
    do
         {
            char auteur[2000];
            char titre[2000];
            short an;
            fscanf(fichier, "%s\t", auteur, titre, &an);

            printf("poiooo %s\t  %s\t  %d\n", auteur, titre, an);
         }
     while(!feof(fichier));
     }
}
