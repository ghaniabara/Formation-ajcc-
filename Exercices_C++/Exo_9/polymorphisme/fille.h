#ifndef FILLE_H
#define FILLE_H
#include "mere.h"
#include <iostream>

class Fille : public Mere
{
public:
    Fille();
    int age = 2;
    void methode2();
    virtual void methode(int age);
};

#endif // FILLE_H
