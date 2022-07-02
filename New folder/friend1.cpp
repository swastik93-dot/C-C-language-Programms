//Naked function can be a friend of our class

#include<iostream>
using namespace std;

class Base   //base class
{
  public:
  int i;
  protected:
  int j;
  private:
  int k;

  
   Base()//ithe base chya adhi public lihale hote
   {
       i=10;
       j=20;
       k=30;
   }
   friend void fun();   //void function la friend tayar kale
   };
   void fun()     //derived class           //naked function
   {
       Base obj1;   // base function cha obj create kela
       cout<<obj1.i<<"\n";     
       cout<<obj1.j<<"\n";   //i,j,k la call kale
       cout<<obj1.k<<"\n";
       //fun ha friend aslya mule tya madhe i,j,k chya value alya
   }

   int main()
   {
    fun();   //fun la call kale

       return 0;
   }