#include <iostream>

using namespace std;
float f (float x,float a)
{
    return x*x-a;
}
float pochodna (float x)
{
    return 2*x;
}
float pierwiastek (float x,float a)
{
    return x-(f(x,a)/pochodna(x));
}
float a,x,i;
int main()
{
    cin>>a;
    i=10;
    x=a;
    while(i--)
    {
     x=pierwiastek(x,a);
    }
    cout<<x;
    return 0;
}
