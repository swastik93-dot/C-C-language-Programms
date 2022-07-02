#include<stdio.h>
#include<stdlib.h>


int main()
{
  int arr[5];
  int size=0;
  int *ptr=NULL;  // GOOD PROGRAMMING PRACTICE TORITE NULL 


  printf("enter the number of element to allocatr:");
  scanf("%d",&size); //apan value lihali ithe store hoil


                                 //malloc vicharte kiti memory phaije
  
  /* step 1 allocte the memory*/ptr=(int*)malloc(size * sizeof(int));  //ya thikani 5*4=20 yail
     // 5 he array che element aani 4 hi integer chi size
     //(int*) lihale karan output int madhe phaije hote          
                      
                               //jr koni address dile tr to pointer madhe ghycha asto
   

   //he khadale  tri code run hoil
   // pn kalnar nahi allocate zali ka nahi
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