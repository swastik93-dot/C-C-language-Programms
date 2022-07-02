#include<stdio.h>

struct demo  //structure define kale
{ 
    
    float fvalue;  //ty madhe tin value decleare kale
   int ino;
    int ivalue;

};
int main()
{
   struct demo obj;   //struct demo la obj nav dile
   
   
   obj.fvalue = 10.11;  //obj madhle tin variable la innitilize kale
   obj.ino = 11;
    
    obj.ivalue = 21;  

   printf("%d\n",obj.ivalue);


   printf("%d\n",sizeof(obj.ivalue));

     printf("%d\n",obj);//garbage value


     return 0;
}