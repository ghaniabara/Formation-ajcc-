#ifndef FILLE_H
#define FILLE_H
#include "mere.h"
#include <iostream>

class fille : public mere
{
public:
    fille();
    int j=0;
    void methodefille();
   ~fille();
};

#endif // FILLE_H
