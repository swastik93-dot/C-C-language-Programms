// member function of a class can be a friend of our class

#include<iostream>
using namespace std;

class Hello
{
public:
    void fun();  //ithe just fun la hello mafdhe decleare kale ahe khali define kale ahea
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
       i=10;
       j=20;
       k=30;
   }
   // member function as a friend  
   friend void Hello::fun();   //error alti karan ; //Hello madhla fun ha demo cha friend ahea
};
void Hello::fun()   //hello madhla fun
{
    Demo obj1;
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";
    cout<<obj1.k<<"\n";

}
int main()
{  
    Hello hobj;  //hello cha hobj create kela
    hobj.fun();  //hobj madhle function

    return 0;
}

