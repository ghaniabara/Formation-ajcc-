#include <iostream>
#include "mere.h"
#include "fille.h"


int main()
{
    Mere p;
    Fille q;
    p.methode();
    //q.methode();
    q.Mere::methode();

}
