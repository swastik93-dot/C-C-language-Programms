#include<iostream>
using namespace std;

class Demo
{
 public:
      int i;
      const int j;
      
   Demo():j(20)  // member innitilization //const bhair innitilize kela
   {
       
        i=10;
      // int j=20;
   }   
};
int main()
{
    Demo obj;
   
   cout<<obj.i<<"\n";
   cout<<obj.j<<"\n";
    return 0;
}
