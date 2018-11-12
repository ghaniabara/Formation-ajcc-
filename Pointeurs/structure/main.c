#include <stdio.h>

int main()
{
    typedef struct{char auteur[20]; char titre[20]; short an;} LIV;
    //struct livre {char auteur[30]; char titre[20]; short an};

    //int LIV[5]={0};

   LIV bib[5]={{"AGATHA CHRISTIE","MORT SUR LE NIL",1965},{"RAPHAELLE GIORDANE","TA DEUXIEME VIE COMMANCE QUAND TU COMPRENDS QUE TU T'EN AS QU'UNE",2015},{"GHANIA BARA", "OVERLAY 3D",2015},{"LA VRAI VIE","ADELINE DIEUDONNÉ",2018},{"MOI MEME","TEST",2017}};



   int i;
   for (i=0; i<5; i++)
   {
    printf("auteur:%s\n titre:%s\n date:%d\n", bib[i].auteur, bib[i].titre, bib[i].an);
   }
}


