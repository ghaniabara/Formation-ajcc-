#include <iostream>
#include "mere.h"
#include "fille.h"

using namespace std;

int main()
{
    Mere p;
    Fille q;

    Mere * m_ptr=&p;
    Mere * m_ptr2=&q;


    m_ptr->methode(5);

    m_ptr2->methode(8);



}
