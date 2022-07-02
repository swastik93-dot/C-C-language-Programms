
// member function can be a friend of our class

#include<iostream>
using namespace std;

class Hello
{
 public:
 int i;

 public:
 void Fun();

};
class Demo
{
  public:
  int a ;
 
private:
 int b;

 protected:
 int c;

 Demo()
 {
     a = 10;
     b = 100;
     c = 1000;

 }
 friend void Hello:: Fun();
};

void Hello:: Fun()
{
    Demo obj;

   cout<<obj.a<<"\n";
   cout<<obj.b<<"\n";
   cout<<obj.c<<"\n";

}
int main()
{
    Hello hobj;

   hobj.Fun();
   
    return 0;
}