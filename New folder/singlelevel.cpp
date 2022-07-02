//this concept is form inheritance
// singlelevel,multilevel,multiple

#include<iostream>
using namespace std;

class Base // base=bap
{
    public: //jr ithe public lihale naste tr default privet zale aste 
    
        int x,y;//object of base is 8 only
        Base()
        {
            cout<<"Inside base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside base destructor\n";
        }
        void fun()
        {
            cout<<"Inside base fun\n";
        }
};
//derived =porga
class Derived : public Base//porane sangyche konapasun inherit la
{
    public:
        int i,j; // object of Derived is 16 ie 4+4+4+4
    Derived()//constructor
    {
        cout<<"Inside derived constructor\n";
    }
    ~Derived()//destructor
    {
        cout<<"Inside derived destructor\n";
    }
    void gun()
    {
        cout<<"Inside derived gun\n";
    }
};

int main()
{
    Derived dobj;  //magchya veles he lihale nahi mahnun error alti

    dobj.fun();
    dobj.gun();
    return 0;
}
