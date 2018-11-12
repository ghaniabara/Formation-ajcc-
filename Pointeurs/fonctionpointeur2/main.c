#include <stdio.h>
int number(char c)
{
   int b=(int)c;
   b=b-48;
   return b;
}

void fonc (char* date)

{
 int day=number(date[0])*10+number(date[1]);
 int months=number(date[3])*10+number(date[4]);
 int year=number(date[6])*1000+number(date[7])*100+number(date[8])*10+number(date[9]);
}

int main()
{
    int day, months, year;
    char *date="21/11/2018";
    //fonc(date, &day, &months, &year);
    fonc("21/11/2018");
    printf("le jour est %d le mois est %d l'année est %d\n",day,months,year);

    return 0;
}
