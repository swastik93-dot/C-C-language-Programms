// this program take ip form user and shows his tax limit
#include<iostream>
using namespace std;

int main()
{
   int input=0;
    //            0    1   2   3   4    5   6
    enum Days{   SUN ,MUN,TUE,WED,THUS,FRI,SAT};

    enum Days obj;

    obj=TUE;

    cout<<obj<<"\n";//2
    cout<<sizeof(obj)<<"\n";//4    



//you can explicitly innitialize value
//              1         2
    enum Gender{Female = 1,Male = 2};
    cout<<"enter your gender\n";
    cout<<"1:female\n";
    cout<<"2:male\n";

    cin>>input;

    switch(input)
    {
        case Female:
        cout<<"tex free limit is 3,00,000\n";
        break;

        case Male:
         cout<<"tex free limit is 2,50,000\n";
        break;

        default:
        cout<<"invalid gender";

        break;
    }
}
