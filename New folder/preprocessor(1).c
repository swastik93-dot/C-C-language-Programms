//preprocessor(1).c  aani  gcc preprocessor.h ya file link aheat

#include<stdio.h>

#include "preprocessor.h"                 // preprocessor.h hi file add keli

//# define MAX 300                       // he bad practice ahea yeakda define kela tr parat karu naey
int main()
{
  struct Demo obj;                      // preprocessor.h file madhlya structure cha object create kela

printf("inside the main\n");
printf("value of macro is :%d\n",MAX); // preprocessor.h  madhe MAX chi value 101 define keli hoti

printf("size of structure is %d\n",sizeof(obj)); //12

fun();

return 0;

}
void fun()                                 //preprocessor.h madhle fun() che function defination
{
    printf("inside fun\n");
}