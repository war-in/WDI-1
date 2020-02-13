#include <iostream>

using namespace std;
int liczba,bufor;
int main()
{
    cin>>liczba;
    bufor=liczba%10;
    while(liczba>0)
    {
       liczba/=10;
       if(bufor==(liczba%10))
       {
           cout<<"nie";
           return 0;
       }
    }
    cout<<"tak";

    return 0;
}
