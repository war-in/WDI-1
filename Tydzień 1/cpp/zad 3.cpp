#include <iostream>

using namespace std;
int fib_1,fib_prev;
int suma,suma_akt;
int main()
{
    cin>>suma;
    fib_1=1;
    fib_prev=0;
    suma_akt=fib_1+fib_prev;
    while(suma_akt<suma)
    {
        fib_1+=fib_prev;
        suma_akt+=fib_1;
        fib_prev=fib_1-fib_prev;
    }
    fib_1=1;
    fib_prev=0;
    while(suma_akt>0)
    {
        if(suma==suma_akt)
        {
            cout<<"istnieje";
            return 0;
        }
        suma_akt-=fib_prev;
        fib_1+=fib_prev;
        fib_prev=fib_1-fib_prev;
    }
    cout<<"nie istnieje";

    return 0;
}
