#include <stdio.h>

void fonc (char *date, int *day, int *months, int *year)

{
 *day=(date[0]-48)*10+(date[1]-48);
 *months=(date[3]-48)*10+(date[4]-48);
 *year=(date[6]-48)*1000+(date[7]-48)*100+(date[8]-48)*10+(date[9]-48);
}

int main()
{
    int day, months, year;
    char *date="05/11/2018";
    fonc(date, &day, &months, &year);
    printf("le jour est %d le mois est %d l'année est %d\n",day,months,year);
        //return 0;
}
