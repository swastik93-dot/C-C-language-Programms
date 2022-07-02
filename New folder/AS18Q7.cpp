// assignment 18 question NO. 7
/*
#include<stdio.h>

int main()
{
    int a;
    int b;

   printf("Enter the first number:");
   scanf("%d",&a);

   printf("Enter the second number:");
   scanf("%d",&b);

   if(a>b)
   {
       printf("first is larger than second");

   }
   else if(b>a)
   {
       printf("second numer is larger than first");
   }
   else
   {
       printf("both number are same");
   }
    return 0;
}
*/
#include<iostream>
using namespace std;

class Number          //class tayar kela
{
    public:    // public dile nahi  mahnun khup error alti
    int no1=0;
    int no2=0;

//};   classs ithech close kelta mahnun error alti
int checknum(int no1,int no2)     //function tyar kale
{
    if(no1>no2)
    
    return no1;
    
    else if(no2>no1) 
    return no2;

    else
    cout<<"Both number are same";
}
};
int main()
{
    int iRet=0;
    int iValue1,iValue2;
    Number obj;       // class la call kale

    cout<<"Enter the first number:";
    cin>>iValue1;  
    
    cout<<"Enter the second number:";
    cin>>iValue2;

    iRet=obj.checknum(iValue1,iValue2);  //iRet la define kale ie ivalue1=no1  ,ivalue2=no2
    cout<<"Maximum number is:"<<iRet;

    return 0;
}
                              