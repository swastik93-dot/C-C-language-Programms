//ya file la error yati karan liner no 25 .if la reletional oprater kalat nahi
//for answer of this refer file opratorover4.cpp
#include<iostream>
using namespace std ;


class Demo
{
  public:
     int x;
     int y;

Demo(int i=0,int j = 0)
{
    x=i;
    y=j;
}
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

   if(obj1==obj2)
   {
       cout<<"objects are same\n";
   } 
   else
   {
       cout<<"objects are different\n";
   }

    return 0;
}
