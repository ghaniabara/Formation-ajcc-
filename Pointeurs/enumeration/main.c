#include <stdio.h>

int main()
{
    typedef enum {lundi,mardi,mercredi,jeudi,vendredi,
    samedi,dimanche} jours;

    int j=0;
    for (j=lundi; j<=dimanche; j++)
    {
     printf("%d\n", j);
    }

}
