#include <stdio.h>

int main(void)
{
//=======================================================================================
    char tab[100]; // 99 caractere + '\0' dans la derniere case

    printf("entrer une chaine de caractere :");

    scanf("%s",tab); // pas de & pour tab car le nom de tableau est déjà une adresse
//=======================================================================================
    char tab1[100]="hola";

    printf("le message est : %s\n",tab1); // afficher le message
//=======================================================================================
    char tab2[100]="bonjour";

    puts(tab2);

//=======================================================================================
    int lg = 0;
    char tab3[100]="langage C";
    while (tab3[lg] != '\0')
    {
      lg+=1;
    }
    printf("la taille de la chaine de caractere est : %d\n", lg);

//=======================================================================================
    int i = 0;
    char mess[100]="le langage C est un langage historique";
    char dest[100]="coucou";
    puts(dest);

    while (mess[i] != '\0')
    {
        dest[i]=mess[i];
        i+=1;
    }
    dest[i]='\0';
    printf("la chaine originale est : %s\n", mess);
    printf("la chaine copie est : %s\n", dest);

    return 0;

}
