#include <iostream>

using namespace std;
int i=0,check,num,bufor;
int main()
{

    cin>>num;
    bufor=num;
    while(num>0){
        num/=10;
        i++;
    }
    while(bufor>0)
    {
        check=bufor%10;
        if(check==i)
        {
            cout<<"zawiera";
            return 0;
        }
        bufor/=10;
    }
    cout<<"nie zawiera";
    return 0;
}
