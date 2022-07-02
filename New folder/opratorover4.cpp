#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo( int i = 10 , int j =20)
    {
        x = i;
        y = j;

    }
 
};
Demo operator - (Demo op1 , Demo op2)
{

    return(op1.x - op1.y, op2.x - op2.y);
}
int main()
{
    Demo obj1(19,1);
    Demo obj2(30,10);
    Demo robj(0,0);

    robj = obj1 - obj2 ;

    cout<<robj.x<<"\n";  
    cout<<robj.y<<"\n";


    return 0;
}