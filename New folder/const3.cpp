//const chi valure user kadun ghatli
#include<iostream>
using namespace std;

class Demo
{
 public:
      int i;
      const int j;
      
   Demo():j(20)  // member innitilization //const bhair innitilize kela
   {
       
        i=10;
      // int j=20;
   }   
   Demo(int a,int b):j(b)
   {
       i=a;//vr i chi value a ghatle
   }
};
int main()                            
{                                      
    Demo obj(11,21); //a=11,b=21
   
   cout<<obj.i<<"\n";//11
   cout<<obj.j<<"\n";//21

   //obj.j++;  ithe error yail karan j ha const ahea
    return 0;
}