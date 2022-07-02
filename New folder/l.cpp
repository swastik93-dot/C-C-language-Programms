#include<stdio.h>
using namespace std;

int main()
{
  enum Marvellous_Batches
  {
      PPA =0 , LB =1  ;
  };
  const int Fees[]={15000 ,16000};
  const float Duration[]={3.5 , 4.0};

  int choice = 0;

  cout<<"Sellect Batch that you want to join\n";
  cout<<"0:PPA\n";
  cout<<"1:LB\n";


  switch(choice)
  {
 case PPA:
    cout<<"Thanks for sellecting the PPA batch\n";
    cout<<"Fees:"<<Fees[PPA]<<"\n";
    cout<<"Duration:"<<Duration[PPA]<<"\n";
    break;


case LB:
    cout<<"Thanks for sellecting the LB batch\n";
    cout<<"Fees:"<<Fees[LB]<<"\n";
    cout<<"Duration:"<<Duration[LB]<<"\n";
    break;    


default:
    cout<<"you are sellecting wrong numnber\n";
    break;

  }
  cout<<"for more information please contact admin\n";
  cout<<"Admin:9359680647";
  
    return 0;
}