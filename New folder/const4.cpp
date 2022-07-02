#include<iostream>
using namespace std;
//this program shows concept of constant behiviour
class Demo
{
 public:
      int i;
      const int j;   //constant characteristic
      
   Demo(int a,int b):j(b)  // member innitilization //const bhair innitilize kela
   {
       
        i=a;
      // int j=20;
   } 
   void fun()
   {
       cout<<"inside fun\n";
       i++; //ALLOWED 
      // j++;   he chalat nahi karan j constant ahea
   }  
   //jr constant adhi asel tr tycha arthe return constant ahea asa hoto
   //nantar lihale tr tycha artha asa ki te function constant ahea
   void gun(int a,const int b)const  //constant behiviour
   {// b is constant i/p argument
       int x = 10;
       const int y = 20;

       cout<<"inside gun\n";
//      i++;   // he allowed nahi karan gun he const function ahea ani ty madhe i ahea //NA due to line no 24
//      j++;  he chalat nahi karan j constant ahea  //NA due to line no 8
        x++; //allowed
//      y++;   //NA  due to line no 27
        
        a++;  //Allowed
//      b++;  //NA  due to line no 24, 2nd const
 
   }
};
int main()
{
    Demo obj(11,21);
   const Demo obj2(11,21);
   
 /*  obj1.fun();
  obj1.gun(10,20);

  obj2.fun();
  obj2.gun(10,20);
   */ 
   cout<<obj.i<<"\n";
   cout<<obj.j<<"\n";
    return 0;
}
