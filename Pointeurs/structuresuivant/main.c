#include <stdio.h>


typedef struct TypeLivre {
    char auteur[200];
    char titre[200];
    short an;
    struct TypeLivre *suivant;
} LIV;

// ###### créer la fonction "affiche" voir la ligne 80 #######
void affiche(LIV *premier)
{
    LIV *q=premier;
    while (q!=0)
    {
        printf("auteur:%s\n  titre:%s\n  année:%d\n", q->auteur, q->titre, q->an);
        q=q->suivant;
    }
}


int main()
{
//###################################################### 1er livre #################################################################################

   LIV *premier;
   premier=(LIV*)malloc(sizeof(LIV));
   strcpy(premier->auteur, "AGATHA CHRISTIE");
   strcpy(premier->titre, "MORT SUR LE NIL");
   premier->an=1965;
   premier->suivant=NULL;

//######################################################## 2eme livre ###############################################################################

   LIV *deuxieme;
   deuxieme=(LIV*)malloc(sizeof(LIV));
   strcpy(deuxieme->auteur, "RAPHAELLE GIORDANE");
   strcpy(deuxieme->titre, "TA DEUXIEME VIE COMMANCE QUAND TU COMPRENDS QUE TU T'EN AS QU'UNE");
   deuxieme->an=2015;
   premier->suivant= deuxieme;
//######################################################### 3eme livre ##############################################################################
   LIV *troisieme;
   troisieme=(LIV*)malloc(sizeof(LIV));
   strcpy(troisieme->auteur, "GHANIA BARA");
   strcpy(troisieme->titre, "OVERLAY 3D");
   troisieme->an=2015;
   deuxieme->suivant=troisieme;

//########################################################## 4eme livre #############################################################################

   LIV *quatrieme;
   quatrieme=(LIV*)malloc(sizeof(LIV));
   strcpy(quatrieme->auteur, "ADELINE DIEUDONNE");
   strcpy(quatrieme->titre, "LA VRAI VIE");
   quatrieme->an=2018;
   troisieme->suivant=quatrieme;

//########################################################## 5eme livre #############################################################################

   LIV *cinquieme;
   cinquieme=(LIV*)malloc(sizeof(LIV));
   strcpy(cinquieme->auteur, "MOI MEME");
   strcpy(cinquieme->titre, "TEST");
   cinquieme->an=2017;
   quatrieme->suivant=cinquieme;

   //######## afficher la liste des livres ########

  // LIV *q=premier;
  // while (q!=0)
  // {
   //    printf("auteur:%s\n  titre:%s\n  année:%d\n", q->auteur, q->titre, q->an);
    //   q=q->suivant;

   //}

   //######## créer fonction "affiche" qui affiche la liste des livres voir la ligne 12 #######

   affiche(premier);


}
