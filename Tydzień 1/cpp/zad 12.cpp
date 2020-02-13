#include <iostream>

using namespace std;
int actual,prev=11,liczba;
int main()
{
   cin>>liczba;
   while(liczba>0)
   {
       actual=liczba%10;
       liczba/=10;
       if(prev<=actual)
       {
           cout<<"nie";
           return 0;
       }
       prev=actual;
   }
   cout<<"tak";
    return 0;
}
