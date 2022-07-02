#include<iostream>

using namespace std;

class demo
{
    public:
    int x;
    int y;
  

   demo()
   {
       cout<<"inside default constructior\n"
   }
   ~demo()
   {
       cout<<"inside distructor\n"
   }
    void fun()  //void function tayar kale
    {
        cout<<"inside fun\n";
    }
};

int main()
{
    demo obj;            //static object creation

    demo*ptr = NULL;     // demo la ptr navacha pointer lavala aani to NULL la represent kala

    ptr= new demo;      // dynamic memory allocation
   
   obj.fun;              //"." direct accessing oprator    

    ptr->fun();    //-> indirect accessing oprator
    delete ptr;

    return 0;
}
