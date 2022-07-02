#include<stdio.h>

//////////////////////////////////////////////
//
//function name:  addation
//input:          two integer
//output:         integer
//description:    it use to perform addation
//author:         Swastik Deshmukh
//date:           05/03/2022
//
//////////////////////////////////////////////

int addation(int ino1,int ino2)
{
  auto int ians=0;
  ians = ino1 + ino2;
  return ians;

}

int main()
{
    auto int ivalue1 = 0, ivalue2=0;
    auto iret=0;

    printf("enter first number:");
    scanf("%d",&ivalue1);


    printf("enter first number:");
    scanf("%d",&ivalue2);


    iret = addation(ivalue1,ivalue2);
    printf("%d",iret);

    return 0;
}