#include<iostream>
using namespace std;

class Base
{
  public:
  int i;

  public:
   int j;

   public:
   int k;

   Base()
   {
       i = 10;
       j = 20;
       k = 30;

   }
   
 
};
class Base2
{
    public:
   int a = 21;

   private:
   int b =51; 

   protected:
   int c = 101;

public:
    void Hello();

   friend class Base;

};
void Base2::Hello()
{
     Base2 bobj;

       cout<<bobj.a<<"\n";
       cout<<bobj.b<<"\n";
       cout<<bobj.c<<"\n";

       Base bobj1;// in Base2 class we call Base1 class

       cout<<bobj1.i<<"\n";
       cout<<bobj1.j<<"\n";
       cout<<bobj1.k<<"\n";


}

int main()
{
  Base2 bobj;
  bobj. Hello();
  Base obj;
  
  

    return 0;
}