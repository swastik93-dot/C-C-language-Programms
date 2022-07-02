#include<stdio.h>

int main()
{
   int arr[5]={10,20,30,40,50};

   int *p = &(arr[0]) ; //p is 10
   int *q = &(arr[4]) ; //q is 50
 
  printf("number of element between q and p are : %d\n",q-p);
  //op =4 bec distance between p & q is 4 blocls

  printf("value of p :%d\n",p)

  p= p + 3;
  printf("Value of p after p= p + 3 :%d\n",p);// output gret varry according memory allocation
  /* value of p after p= p + 3 is memory of p + 12 
  because p+3 it means p+3 blocs 1 bloc of int is 4 byte
 so memory of 4 blocs is 12 byte
*/

  printf("value of q %d\n",q);

  q= q - 3;
  /* value of q after q= q - 3 is memory of  q-12 
  because q - 3 it means q - 3 blocs 1 bloc of int is 4 byte
 so memory of 4 blocs is 12 byte
*/

  printf("value of q after q= q - 3 :%d\n",q);

 return 0;
}