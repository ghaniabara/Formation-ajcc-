#include <stdio.h>
#define ghania 10 //directives : voir ligne 49 et taper dans terminal gcc -E main.c > programme.i


typedef struct TypeLivre {
    char auteur[200];
    char titre[200];
    short an;
    struct TypeLivre *suivant;
} LIV;

void savetexte (LIV *premier);

///
/// \brief affiche => la fonction "affiche" permet de lister ma bibliothèque
/// \param premier => un pointeur qui pointe sur le premier livre de ma bibliotéque
/// \auteur => GB
/// \date => 181107
///
void affiche(LIV *premier)
{
    LIV *q=premier;
    while (q!=0)
    {
        printf("auteur:%s\n  titre:%s\n  année:%d\n", q->auteur, q->titre, q->an);
        q=q->suivant;
    }
}


 void ajoute (char *titre, char *auteur , int an , LIV *premier)
 {
     LIV *p;
     p=(LIV*)malloc(sizeof(LIV));
     strcpy(p->auteur, auteur);
     strcpy(p->titre, titre);
     p->an=an;
     p->suivant=0;
     LIV *q=premier;
     while (q->suivant!=0)
     {
         q=q->suivant;
     }
     q->suivant= p;
 }

 int main()
{
   int i=2;
   i=ghania+5;

//###################################################### 1er livre #################################################################################

   LIV *premier;
   premier=(LIV*)malloc(sizeof(LIV));
   strcpy(premier->auteur, "AGATHA");
   strcpy(premier->titre, "MORT SUR LE NIL");
   premier->an=1965;
   premier->suivant=NULL;

   //###################################################### n livre #################################################################################

   ajoute("RAPHAELLE GIORDANE","TA DEUXIEME VIE COMMANCE QUAND TU COMPRENDS QUE TU T'EN AS QU'UNE",2015,premier);
   ajoute("GHANIA BARA","OVERLAY 3D",2015,premier);
   ajoute("ADELINE DIEUDONNE","LA VRAI VIE",2018,premier);
   ajoute("MOI MEME","TEST",2017,premier);

   affiche(premier);
   savetexte(premier);




}

void savetexte (LIV *premier)
 {

     FILE *fichier;
     fichier = fopen ("bib.txt", "w+");
     if (fichier==NULL)
     {
         printf("error");
     }
     else
        {

         LIV *q=premier;
         while (q!=0)
           {
             fprintf(fichier, "%s\t  %s\t  %d\n", q->auteur, q->titre, q->an);
             q=q->suivant;
           }

        }

    fclose(fichier);
  }

