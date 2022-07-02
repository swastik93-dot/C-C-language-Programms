///////////////////////////////////////////////////////////////////////

//NAME-   Swastik S. Deshmukh
//FILE-   multiple.cpp
//TOPIC-  Multiple inheritance(add 2 class in onee class)
//Date-   29-03-2022 
//Folder- Marvellousc++

///////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Base1
{
    public:
    int i,j;
    Base1() 
    {
        cout<<"Base constructor\n";        // 1srt print hoil
    }
    ~Base1()
    {
        cout<<"Base destructor\n";          // 6th print hoil

    }
};
class Base2   // ithe () dilte mahnun error alti
{
    public:
    int x,y;
    Base2()
    {
        cout<<"Base2 constructor\n";       // 2nd print hoil

    }
    ~Base2()
    {
        cout<<"Base2 destructor\n";         //5th print hoil
    }
};
class Derived: public Base1, Base2     // classs derived madhe public base 1 and 2
{
  public:
  int a;
  Derived()
  {
   cout<<"Derived constructor\n";        //3rd print hoil
  }
  ~Derived()
  {
      cout<<"Derived distructor\n";        //4th print hoil
  }
};


int main()
{
   Derived dobj;
    return 0;
}
//jr vr line n 49 la Base2 dobj takala tr Base2 constructor
                                      //  Base2 destructor    print hoil