#include<iostream>
using namespace std;

void classe1(int *p1, int *p2)
{

    if (*p1>*p2)
    {
        int temp=*p2;
        *p2 = *p1;
        *p1=temp;
    }
}

void classe2(int &ptr1, int &ptr2)

{
    if (ptr1>ptr2)
    {
    int temp=ptr2;
    ptr2=ptr1;
    ptr1=temp;
    }
}

int main()
{

    int a;
    int b;

    int ptr1=5;
    int ptr2=3;

    int *p1;
    p1=&a;
    *p1=2;

    int *p2;
    p2=&b;
    *p2=1;

    //cout<< "//////Saisir 2 entiers" << *p1 << *p2 << ptr1 << ptr2 << std::endl;
    //cin >> *p1 >> *p2 >> ptr1 >> ptr2;

    cout << "les entiers *p1*p2 = " << *p1 << *p2 << std::endl;
    cout << "les entiers *ptr1*ptr2 = " << ptr1 << ptr2 << std::endl;

    cout << "avant classement *p1 vaut " << *p1 << std::endl;
    cout << "avant classement *p2 vaut " << *p2 << std::endl;
    cout << "avant classement ptr1 vaut " << ptr1 << std::endl;
    cout << "avant classement ptr2 vaut " << ptr2 << std::endl;

    classe1(p1,p2);
    classe2(ptr1,ptr2);

    cout << "classement " << *p1 << *p2 << ptr1 << ptr2 << std::endl;


    cout << "apres classement *p1 vaut " << *p1 << std::endl;
    cout << "apres classement *p2 vaut " << *p2 << std::endl;
    cout << "apres classement ptr1 vaut " << ptr1 << std::endl;
    cout << "apres classement ptr2 vaut " << ptr2 << std::endl;

}
