#include<iostream>
using namespace std;

class Addation
{
  public:

     int i =0 ;
     int j = 0;

     public:
     int Addation(int iChk ,int Arr[],int iValue)
     {
         int i =0 ;
  int j = 0;
  
    for(i =0 ;i < iChk ; i++)

    {
    if(Arr[i]== iValue)
    {
        j ++; 

    }
  }
    return j;

}
};

int main()
{
    int iValue = 0;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;
}`