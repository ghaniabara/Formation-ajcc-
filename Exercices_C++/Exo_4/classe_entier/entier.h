#ifndef ENTIER_H
#define ENTIER_H

#include <iostream>

class Entier
{
public:
    Entier();
    Entier(const Entier &val);

    int i;
    int *ptr;
    void print();

};

#endif // ENTIER_H
