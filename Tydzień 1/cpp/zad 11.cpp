#include <iostream>

using namespace std;
int liczba,licznik=1;
long long reku(int i)
{
    if(i==1)
    {
        return 2;
    }else
    {
        return (3*reku(i-1)+1) ;
    }
}int main()
{
    cin>>liczba;
    while(reku(licznik)<=liczba){
        if(liczba%reku(licznik)==0)
        {
            cout<<"tak";
            return 1;
        }
        licznik++;
    }
    cout<<"nie";
    return 0;
}

