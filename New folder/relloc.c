// this is just a dummy code 
#include<stdio.h>
#include<stdlib.h>

// fakta line 19 madhe malloc chya jagi calloc,aani * chya gagi ','

int main()
{
  
  int *ptr=NULL;  


  
//(int*) =typecasting
                                 
  
  ptr=(int*)malloc(5* sizeof(int)); //5 cha table

  ptr=(int*)realloc(ptr,7* sizeof(int)); // navin 2 ale
  ptr=(int*)realloc(ptr,3* sizeof(int)); // 2 kami zale  as malloc madhun
     free(ptr); 
     //free memory free karto
       return 0;
}                    

// jasta garaj lagat nahi
// garaj asel tr vapara