#include<stdio.h>
#include<stdlib.h>


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
int main()
{ int iValue = 0;
  int iSize = 0;
  int iCnt = 0;
  int iRet = 0;
  int *ptr = NULL;

  printf("ENTER HOW MANY NUMBER DO YOU WANT TO ADD: ");
  scanf("%d",&iSize);

  ptr = (int *)malloc(sizeof(int)* iSize);

  printf("Enter the number in Array:\n");

  for(iCnt =0 ;iCnt<iSize ; iCnt++)
  {
      scanf("%d",&ptr[iCnt]);
  }
  printf("Enter which number do you want to check: ");
  scanf("%d",&iValue);

iRet = Addation(iSize,ptr,iValue);
printf("%d times %d present in given list",iRet,iValue);


  return 0;
}