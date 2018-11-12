#include <stdio.h>
#include <stdlib.h>


////////////////////la fonction max///////////////////
int max( int v1, int v2 )
{
 if (v1>v2) return v1;
 else return v2;
}

//////////////////la fonction min///////////////////
int min( int v1, int v2 )
{
 if (v1<v2) return v1;
 else return v2;
}

//////////////////la fonction ASCII///////////////

int ascii(char c)
{
 return ((int)c);
}

////////////////la fonction Char////////////////

char Char(int x)
{
 return ((char)x);
}

///////////fonction premmajuscule//////////////////

char *PremMajuscule( char c[])
{
 if ((int)c[0] >=97 && (int)c[0] <=122)
     c[0] = c[0]-32;
 return (c);
}

//char * test( char mot[])
//{
//int i;
//scanf("%s",mot);
//for (i=0; i<strlen(mot); i++) {
     //mot[i]=toupper(mot[i]);
   //  mot[i]=tolower(mot[i]);
//}
 //return (mot);
//}

///////////////fonction Majuscule/////////////////////

char * Majuscule( char c[])
{
 int i;
 for (i=0;i<strlen(c);i++)
 {
  if ((int)c[i] >=97 && (int)c[i] <=122)
     c[i] = c[i]-97+65;
 }
 return (c);
}

////////////////////fonction Miniscule//////////////////////

char * Minuscule( char c[])
{
 int i;
 for (i=0;i<strlen(c);i++)
 {
  if ((int)c[i] >=65 && (int)c[i] <=65+26-1)
     c[i] = c[i]-65+97;
 }
 return (c);

}

int main()
{
  printf ("max 5 10 : %d\n",max(5,10));
  printf ("min 5 10 : %d\n",min(5,10));
  printf("code ASCII de 'B' = %d\n",ascii('B'));
  printf("Char de '65' = %c\n",Char(65));
  char c[]="bONjour";
  //char mot[]="sALut";
  //char c2[]="BONJOUR";
  printf ("PremMajuscule => %s\n",PremMajuscule(c));
  printf ("Majuscule : %s\n",Majuscule(c));
  printf ("Minuscule : %s\n",Minuscule(c));
  //printf ("test : %s\n",test(mot));
}


