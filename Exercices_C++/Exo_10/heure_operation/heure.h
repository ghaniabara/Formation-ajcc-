#ifndef HEURE_H
#define HEURE_H
#include "heure.h"
#include <iostream>

class Heure
{
public:
    Heure(int h=0, int m=0,  int s=0);
    void print ();
    Heure operator+(Heure p);

private:
    int m_h;
    int m_m;
    int m_s;
};

#endif // HEURE_H
