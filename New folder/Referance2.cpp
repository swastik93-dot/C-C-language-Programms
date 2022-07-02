#include<iostream>
using namespace std;

int main()
{                  //           __________
    int no = 11;   //       no |          |x
    int&x = no;    //          |__________|y
    int&y = &no;   //         100         104
    //this use of & before = sign indicatr it is referance

    //referance means nick name(topan nav)

    return 0;
}