// array and pointer coreletion

// program che intension line no 14-16 same output but differentation ahea
#include<stdio.h>

// array and pointer coreletion
int main()
{

 int arr[5]={10,20,30,40,50};

 printf("%d\n",arr[0]);  //
 
 printf("%d\n",arr[4]); // line no 14,15,16 all same output                   but prefer line 10
printf("%d\n",4[arr]);
printf("%d\n",*(arr+4));

 printf("%d\n",arr); //100
 printf("%d\n",&arr); //100
 printf("%d\n",arr+1);//104
 printf("%d\n",(&arr)+1);//120
 printf("%d\n",sizeof(arr));//20
 printf("%d\n",sizeof(arr[2]));//4


    return 0;
}


//arr[2];
//*(arr+2);
//2[arr]
//all are same