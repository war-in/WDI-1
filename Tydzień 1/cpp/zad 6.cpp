#include <iostream>
#include <cmath>
using namespace std;
int y;
float up,down,r;
int main()
{
    up=9;
    down=1;
    cin>>y;
    while(pow(up,up)!=y)
    {
        if(pow(up,up)>y)
        {
            up=(up+down)/2;
        }else
        {
            up*=2;
            down=(up+down)/2;
        }
        r=up-down;
        if(abs(r)<0.01)
        {
            break;
        }

    }
    cout<<up;

    return 0;
}
