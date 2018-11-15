#include <iostream>
#include "maclassestatic.h"
using namespace std;

int main()
{
     maclassestatic a;

    for ( int j = 0; j< 10; j++)
    {
      a.methode();
      std::cout<< maclassestatic::i <<std::endl;
    }

}
