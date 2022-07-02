#include<iostream>
using namespace std;

class num
{
    public: 
    int i=0;
    int j=0;

  int Demo(int k,int l)
  {
      if (k>l)
      return k;

      else
      return l;
  }  
};

int main()
{
    int x,y;
    int iRet=0;
   num obj;

   cout<<"Enter the first number";
   cin>>x;

   cout<<"Enter the second number";
   cin>>y;

   iRet=obj.Demo(x,y);
   cout<<"maximum number is:"<<iRet;


    return 0;
}