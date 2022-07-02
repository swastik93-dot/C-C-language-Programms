
// ya madhe purevirtual chi concept nahi just virtual la call kase kartat te ahea

#include<iostream>
using namespace std;

class Base
{
public:
      int x,y;

void fun()  //1000        //concreate non virtual
   {
       cout<<"Base fun\n";
   }   
virtual void gun()//2000       //concreate  virtual
{
    cout<<"Base gun\n";
}
virtual void sun()
{
    cout<<"Base sun\n";//3000              //concreate virtual
}

//---------
virtual void run()=0;      //abstract function

};

class Derived:public Base      //Base cha derived
{
  public:
     int i,j;

//4000 
void fun()   //redefine
{
    cout<<"Derived fun\n";
}
//5000
virtual void gun()   // overriding
{
    cout<<"Derived gun\n";
}
//6000
void run()   //concreate function
{
   cout<<"Derived run\n";
}
};

int main()
{
    //Base bobj  //not allowed
    Derived dobj;   //derived cha obj create kela //Allowed

    Base* bp=NULL;
    
    //upcasting
    bp=&dobj;   //bp pointer madhe derived chya obj chi value store keli

   cout<<sizeof(Base)<<"\n";    //16       //mazya compiler la VPTR chi memory allocation 4 byte zale  so 4+4+4
   cout<<sizeof(Derived)<<"\n";    //24
   

   bp->fun(); //Base fun
   bp->gun(); //Derived gun
   bp->sun(); //Base sun
   bp->run(); //Derived run
    return 0;
}