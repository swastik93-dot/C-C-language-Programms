
//function overloding is type of polymorphism   ,single name multiple behiviour
#include<iostream>
using namespace std;

class demo //ithe error yet hota karan() 
{
    public:
    //Addation@2ii
    int Addation(int no1 , int no2) //this is function
    { 
        int ans=0;
        ans = no1 + no2;
        return ans;
    }
     //Addation@3iii
    int Addation(int no1 , int no2,int no3)
    {
        int ans=0;
        ans = no1 + no2 + no3;
        return ans;

    }
     //Addation@3iiii
    int Addation(int no1 , int no2 ,int no3,int no4)
    {
        int ans=0;
        ans = no1 + no2 + no3 +no4;
        return ans;
    }
};

int main()
{

   demo obj;
   int ret=0;
   //push 10
   //push 11         //this 3 is assembly works internally
   // call 1000      //1000 is address
   ret=obj.Addation(10,11);  //obj.Addation@2ii(10,11);
   cout<<ret<<"\n";

  //push 10
   //push 11           //this 4 is assembly works internally
   //push 21
   // call 2000
   ret=obj.Addation(10,11,21);  //obj.Addation@3iii(10,11,21);
   cout<<ret<<"\n";

   //push 10
    //push 11
    //push 21          //this 5 is assembly works internally
    //push 51
    // call 3000
    ret=obj.Addation(10,11,21,51);  //obj.Addation@4iiii(10,11,21,51);
    cout<<ret<<"\n";
 

    return 0;
}