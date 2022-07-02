//all callby functions

#include<iostream>
using namespace std;

void callbyvalue(int q)
{
    q++;
}
void callbyaddress(int *p)
{
    *p++;
}
void callbyreferance(int &s)
{
   s++;
}
int main()
{
   int i = 10;
   int j = 10;
   int k = 10;

   callbyvalue(i);
   cout<<i<<"\n";//10

   callbyaddress(&j);
   cout<<j<<"\n";//10

   callbyreferance(k);
   cout<<k<<"\n";//10



    return 0;
}
