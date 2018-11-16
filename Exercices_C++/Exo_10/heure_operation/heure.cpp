#include "heure.h"
using namespace std;



Heure::Heure(int h, int m, int s)
{
    m_h=h;
    m_m=m;
    m_s=s;

}

void Heure::print()
{
    std::cout << m_h<<":"<<m_m<<":"<<m_s<<std::endl;
}

Heure Heure::operator+(Heure q)
{


    int retenue_h=0;
    int retenue_m=0;
    Heure H;
    int s =m_s+q.m_s;
    if (s >=60)

    {
     retenue_m=1;
     H.m_s=s%60;
    }
    else H.m_s=s;

    int m=m_m+q.m_m+retenue_m;
    if (m>=60)
    {
        retenue_h=1;
        H.m_m=m%60;
    }
    else H.m_m=m;


    H.m_h=m_h+q.m_h+retenue_h;


    return H;

 }





