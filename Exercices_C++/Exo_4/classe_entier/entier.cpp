#include "entier.h"
using namespace std;

Entier::Entier()
{
    i=8;
    ptr=&i;
}

/*ajout de constructeur de copie synthétisé
pour pouvoir modifier les valeurs de *ptr*/
Entier::Entier(const Entier &val)
{
    i=val.i;
    ptr=&i;
}


void Entier::print()
{

    std::cout << *ptr << std::endl;
    //std::cout << ptr << std::endl;
    //std::cout << &i << std::endl;
}

