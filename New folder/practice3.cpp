//constructors
#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

Demo()
{
   cout<<"Inside default constructor\n";
   x = 0;
   y = 0;
} 

Demo(int i , int j)
{
 cout<<"Inside paramatrised constructor\n";   
 x = i;
 y = j;
}

Dem(Demo &ref)
{
  cout<<"Inside copy constructor\n"; 
  x = ref.x;
  y = ref.y;
}

~Demo()
{
    cout<<"inside Distructor\n";

}
};

int main()
{
  Demo obj1(11,21);
  Demo obj2(obj1);
 
    return 0;
}