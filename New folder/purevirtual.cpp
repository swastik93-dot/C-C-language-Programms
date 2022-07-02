#include<iostream>
using namespace std;

class Base
{
    public:
         int x,y;

int add(int a,int b)
{
    return a+b;
}

virtual int sub(int a,int b)=0;        //pure virtual
};
class Derived
{
    public:
    int i,j;

    int mult(int a,int b)       //ithe ; dilta mahnun error alti
    {
    return a*b;
    }
};
int main()
{
    Base *bp=new Derived();
    int ret=0;

    ret=bp->add(10,11);
    cout<<ret<<"\n";
    
    return 0;
}