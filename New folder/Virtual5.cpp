#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

        virtual void fun()      // 1000
        {   cout<<"Base fun"<<"\n"; }
        virtual void gun()      // 2000
        {   cout<<"Base gun"<<"\n"; }
        void sun()          // 3000            //ithe virtual vaparla nahi
        {   cout<<"Base sun"<<"\n"; }
        virtual void run()      // 4000
        {   cout<<"Base run"<<"\n"; }
};
class Derived : public Base
{
    public:
        int i,j;

        void fun()      // 5000
        {    cout<<"Derived fun"<<"\n"; }
        virtual void gun()  // 6000
        {    cout<<"Derived gun"<<"\n"; }
         void sun()     // 7000               //ithe virtual vaparla nahi
        {    cout<<"Derived sun"<<"\n"; }
         virtual void mun()     // 8000
        {    cout<<"Derived mun"<<"\n"; }
};

int main()
{
    Base *bp = new Derived();   // Upcasting

    bp->fun();      // Derived fun    == base -virtual ,Derived not virtual ==jr fun donhi kadhe pn asel tr derived che ghate
    bp->gun();      // Derived gun    == both are virtual ==same for gun
    bp->sun();      // Base sun       == both are non virtual ,then form Base
    bp->run();      // Base run       ==run present only in Base so 
    // bp->mun();  // Error       error yail karan te base madhe nahi


    return 0;
}