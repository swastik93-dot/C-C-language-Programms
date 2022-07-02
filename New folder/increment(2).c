#include<stdio.h>

int main()
{
   int arr[5]={10,20,30,40,50};

   int*p=&(arr[0]);
   int*q=&(arr[4]);


   printf("value of p before increment is %d:\n",p);
   p++;

    printf("value of p after increment is %d:\n",p);

                                                   // 4 byte ne output vadhel
    printf("value of p before increment is %d:\n",p);
   p--;

    printf("value of p after increment is %d:\n",p);
                                                  // 4 byte ne output mi hoil

      return 0;

}