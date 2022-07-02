
// referance to array(array la topan nav dile)
#include<iostream>
using namespace std;

int main()
{

    int arr[4]={10,20,30,40};
    int (&brr)[4]= arr; //yethe &  meance reference
    //(arr  che topan nav ya madhe brr ahea

    return 0;
}