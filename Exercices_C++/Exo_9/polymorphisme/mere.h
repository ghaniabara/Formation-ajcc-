#ifndef MERE_H
#define MERE_H
#include <iostream>

class Mere
{
public:
    Mere();

    int age = 1;
    void methode1();
    virtual void methode(int age);
};

#endif // MERE_H
