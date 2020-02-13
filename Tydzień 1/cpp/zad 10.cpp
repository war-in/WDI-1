#include <iostream>

using namespace std;
float skok,k,pole,i=1;
int main()
{
    cin>>skok>>k;
    while(i<k)
    {
        pole+=skok*(1/(i+skok));
        i+=skok;
    }
    cout<<pole;
    return 0;
}
