#include <iostream>

using namespace std;

int a,b; //tworzymy zmienne przechowujące dwa wraz ciągu
int main()
{
    a=b=1;
    while(b<=1000000) //dopóki drugi wyraz ciągu nie przekroczy miliona generujemy kolejne wyrazy
    {
        b+=a; //kolejny wyraz jest równy poprzedniemu plus sobie
        a=b-a;
    }
    cout<<a; //wypisujemy ostatni wyraz przed milionem


    return 0;
}
