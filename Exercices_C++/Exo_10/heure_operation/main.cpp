#include <iostream>
#include "heure.h"

using namespace std;

int main()
{

    Heure a(15,00,59);
    Heure b(00,59,01);

    a.print();
    b.print();

    a=a+b;
    a.print();
    return 0;
}
