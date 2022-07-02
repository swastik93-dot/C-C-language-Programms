#include<iostream>
using namespace std;

class Base
{
    public:
    int i;

    private:
    int j;

    protected:
    int k;

    public:
    Base()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    friend void Fun();
};
void Fun()
{
    Base obj;

    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";

}
 int main()
 {
      Fun();

     return 0;
 }