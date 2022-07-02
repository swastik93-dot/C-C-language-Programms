#include<iostream>
using namespace std;

class Demo
{
 public:
   int j,k;

   static int x;  //demo class madhe static define kale

   Demo()
   {
       cout<<"inside default constructor\n";
       j=10;
       k=20;

   }
};
int Demo ::x =30; //ithe to static madhla x define kale
int main()
{
 
 cout<<Demo::x<<"\n"; //30

    return 0;
}