#include<iostream>
using namespace std;

class Demo
{
public:
  //inline saloon vala ghair ala 
   inline int Add(int no1,int no2)
  {
      int ans =0;
      ans = no1 + no2;
      return ans;
  }
};

int main()
{
    Demo obj;
cout<<sizeof(obj)<<"\n";//1   hunda example

    int ret = 0;

    ret = obj.Add(10,11);

    cout<<ret<<"\n";
}
//inline is request 


//resist is also request(resistor storage class)