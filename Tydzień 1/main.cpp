#include <iostream>

using namespace std;

int a,b;
int main()
{
    a=b=1;
    while(b<=1000000)
    {
        b+=a;
        cout<<a<<endl;
        a=b-a;
    }
    cout<<a;


    return 0;
}
