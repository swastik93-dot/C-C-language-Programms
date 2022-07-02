#include<iostream>

using namespace std;

class Demo    ///name of constructor shuld be same as name of class
{
    public:
        int x;      // Characteristics
        int y;      // Chaeracteristics

        Demo()      // Default constructor= if constructor not accepting any parameter(sadi pavbhaji)
        {
            cout<<"Inside Default constructor\n";
            x = 0;
            y = 0;
        }      // there is not shuld be any return value in constructor

        Demo(int i, int j)  // Parametrised constructor = if constructor accepting any parameter  (pavbhaji with chease)
        {
            cout<<"Inside Parametrised constructor\n";
            x = i;
            y = j;
        }

        Demo(Demo  &ref)    // Copy constructor= if constructor accepting object of same class (shajarchya table vr chi pav bhaji)
        {
            cout<<"Inside copy constructor\n";
        }

        ~Demo()     // Destructor
        {
            cout<<"Inside Destructor\n";
       }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    cout<<sizeof(obj1)<<"\n";      //8       
    cout<<sizeof(obj2)<<"\n";      //8

    cout<<"Value of x in obj1 : "<<obj1.x<<"\n";    //  11
    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";    //      51

    obj1.x++;

    cout<<"Value of x in obj1 : "<<obj1.x<<"\n";    //  12
    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";    //      51

    return 0;
}
