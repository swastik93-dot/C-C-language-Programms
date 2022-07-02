//Hole class is friend of our class
#include<iostream>
using namespace std;

class Hello
{//hello madhe 2 function fun ani gun
public:
    void fun();   //fun decleare kale
    void gun();   //gun declearte kale
};

class Demo
{
public:
      int i;
protected:
      int j;
private:
      int k;

public:
      Demo()
      {
          int i= 10;
          int j= 20;
          int k= 30;
      }
    friend class Hello;  //Hole Hello class la friend kale
};
void Hello::fun()  //  hello madhle fun function define kale
{
    Demo obj1;
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";
    cout<<obj1.k<<"\n";
}
void Hello::gun()  //  hello madhle gun function define kale
{
    Demo obj1;
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";
    cout<<obj1.k<<"\n";

}
int main()
{
    Hello hobj;     //hello cha obj tayar kela 
    hobj.fun();     // fun la call kale
    hobj.gun();     //gun la call kale

    return 0;
}