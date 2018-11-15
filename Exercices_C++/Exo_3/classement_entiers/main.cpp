#include<iostream>
using namespace std;

void classe1(int *p1, int *p2)
{

    if (*p1>*p2)
    {
        int temp=*p2;
        *p2 = *p1;
        *p1=temp;
        //temp=*p2;
    }
}

int main()
{

    int a;
    int b;

    int *p1;
    p1=&a;
    *p1=2;

    int *p2;
    p2=&b;
    *p2=1;

    cout << *p1 << *p2;

    //cout<< "Saisir 2 entiers" << std::endl;
    //cin >> *p1 >> *p2;

    classe1(p1,p2);
    cout << *p1 << *p2;
    cout << "///// *p1 vaut " << *p1;
    cout << "///// *p2 vaut " << *p2;

}
