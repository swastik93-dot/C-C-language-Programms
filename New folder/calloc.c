#include<stdio.h>
#include<stdlib.h>

// fakta line 19 madhe malloc chya jagi calloc,aani * chya gagi ','

int main()
{
  int arr[5];
  int size=0;
  int *ptr=NULL;  


  printf("enter the number of element to allocatr:");
  scanf("%d",&size); //apan value lihali ithe store hoil


                                 
  
  ptr=(int*)calloc/* ithe badal m convert c*/(size ,/* ithe * convert ','*/sizeof(int));  
 // this line only change change  otherse all same as malloc
  
     if(ptr == NULL)
     {
       printf("unable to allocate memory\n");
     }
     else
     {
       printf("memory sucessfully allocated\n");
     }
     // step 2  use the memory
     free(ptr); //step 3 free the memory
     //free memory free karto
       return 0;
}                    