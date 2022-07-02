#include<iostream>
using namespace std;

int main()
{
    int Arr[5];
    
    int *p  =NULL;

    p = new int[5];

    if (p==NULL)
    {
        cout<<"unable to allocate the memory\n";
    }
    else
    {
        cout<<"memory get allocated sucessfully at the address\n";
       
    }

    delete[]p;

    return 0;
}