#include <iostream>
#include "entier.h"

using namespace std;

int main()
{
    Entier p;
    p.print();

    Entier q(p);
    q.print();

    q.i=5;
    q.print();

    return (0);
}
