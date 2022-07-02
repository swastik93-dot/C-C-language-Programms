//accept numbers and perform add and sub

//POP-procegurl programming language
#include<stdio.h>

int addation(int no1,int no2)
{
  auto int ians=0;
  ians=no1 + no2;

  return ians;
}

 int substraction(int no1,int no2)
{
  auto int ians=0;
  ians=no1 - no2;

  return ians;
}  
int main()
{
 int i=0;
 int j=0;
 int ret=0;

 printf("enter first No:");
 scanf("%d",&i);

 printf("enter second No:");
 scanf("%d",&j);

ret=addation(i,j);

printf("%d\n",ret);

ret=substraction(i,j);
printf("%d",ret);



} 

