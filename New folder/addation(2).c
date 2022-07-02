#include<stdio.h>
//gharakhalche dukan
int addation(int No1,int No2)
{
    int Ans=0;           //local variable of addation
    Ans=No1 +No2 ;

    return Ans;          //jyane call kela tyala value de
}
//aple ghar
int main()

{
  int a=10;
  int b=20;
  int c=0;

  c=addation(a,b);

                       //gharchyna bolun sang kay zale te
printf("%d",c);
  return 0;            // OS la kalav ki program nit zala..

}

//another way

/*
int addation(int a,int b)
{
  int ans=0;
  anss=a+b;
  return ans;
}
int main()
{
  int a = 10;
  int b = 20;
  int c = 0;

  c = addationn(a,b);

  printf("%d\n",c);

}
