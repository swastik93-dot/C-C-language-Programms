#include<iostream>
using namespace std;

int main()
{
    enum Marvellous_Batches          // enum is set of intiger constant
    {
        PPA = 0,LB = 1, python = 2
    };

    const int Fees[]={15000,16000,17000};
    
    const float Duration[]={3.5,4.0,3.5};

    int choice = 0;
     
   cout<<"sellect the batch that you want to join\n";
   cout<<"0:PPA\n";

   cout<<"1:Logic Building\n";

   cout<<"2:python\n";

   cin>>choice;

   switch(choice)

   {
       case PPA:
               cout<<"thank you for sellecting the pre-placement activity batch\n";
               cout<<"Duration is :"<<Duration[PPA]<<"\n";
               cout<<"Fees are:"<<Fees[PPA]<<"\n";
        break;
      
       
       case LB:
               cout<<"thank you for sellecting the Logic Building batch\n";
               cout<<"Duration is :"<<Duration[LB]<<"\n";
               cout<<"Fees are:"<<Fees[LB]<<"\n";
       break;
     

    case python:
               cout<<"thank you for sellecting the python batch\n";
               cout<<"Duration is :"<<Duration[python]<<"\n";
               cout<<"Fees are:"<<Fees[python]<<"\n";
       break;
      

       default:
              cout<<"sorry there is no such batch\n";
              cout<<"contact Admin:7020713938\n";
       break;
       
   } 
   cout<<"Thank You for visiting Marvellous Infosystem\n";

    return 0;
}