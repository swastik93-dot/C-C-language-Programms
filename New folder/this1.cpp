#include<stdio.h>
using namespace std;

class Demo
{
    public:   // jr ithe public lihale nahi tr tithe default  private tayar hote
      int x;
      int y;


Demo(int a =10,int b=20 )  // constructor create kela
{
    x = a;
    y = b;
}

void fun(int no)
{
  printf("inside fun\n");
  }
};   //ithe class close kale

int main()
{
    Demo obj(11,21);    //demo cha object tayar kala
//cout<<Demo;
    obj.fun(51);
//cout <<obj.fun
    return 0;
}















