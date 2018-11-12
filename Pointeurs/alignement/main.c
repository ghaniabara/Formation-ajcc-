#include <stdio.h>

int main()
{
    typedef struct _noalign {
        char c; // 1 octet */
        double d; /* 8 octets */
        int i;/* 4 octets */
        char c2[3]; /* 3 octets */
        float a; //4 octets
    }noalign; /* 24 octets car padding */

    typedef struct _align{
        double d;  /* 8 octets */
        int i;  /* 4 octets */
        float a; //4 octets
        char c2[3] ;/* 3 octets */
        char c;  /* 1 octet */
        //float a; //4 octets
    }align; /* 16 octets */


    int s1=sizeof(noalign);
    int s2=sizeof(align);
    printf("s1 = %d\ns2 = %d\n",s1,s2);

    float a=1.2;
    int s=sizeof(a);
    printf("s = %d\n",s);

}
