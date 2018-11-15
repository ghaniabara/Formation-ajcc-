#include<iostream>
//using namespace std;

int main()
{

int i=0;
while(i<=10)
       {
        using namespace std;
        cout<<"ETAPE "<< i << endl;  //cout<<"ETAPE "<< i << std::endl;
        i++;
       }
//=============================================================================

int j;
for(j=50; j<=60; j+=1)
       {
        using namespace std;
        cout<<"USER "<< j << endl;
       }
return 0;
}

