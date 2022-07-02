#include<iostream>
using namespace std;

class Hello
{
 public:

 void fun();
 void gun();

};

class Demo
{
public:
  int i;

  public:
   int j;

   public:
   int k;

public:
 Demo()
 {
       i = 10;
       j = 20;
       k = 30;
 }
 friend class Hello;  // class Hello is friend of class Demo
};
void Hello::fun()
{
     Demo obj;

     cout<<obj.i<<"\n";
     cout<<obj.j<<"\n";
      cout<<obj.k<<"\n";
}
void Hello::gun()
{
    Demo obj1;

      cout<<obj1.i<<"\n";
      cout<<obj1.j<<"\n";
      cout<<obj1.k<<"\n";

}

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    

    return 0;
}