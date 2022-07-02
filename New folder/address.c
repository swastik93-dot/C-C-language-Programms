#include<stdio.h>

int main()
{
    int no =11;
    char ch ='A';
    
    printf("%d\n",no);                              //11
    printf("value of ch:%c\n",ch);                 //A

    printf("address of no is :%u\n",&no);          // ya jage vr addtess yail in our case 100
    printf("address of ch is :%u\n",&ch);          //ya jage vr char cha address yail


   printf("size of ch is:%d\n ",sizeof(ch));      //size of charactor=1 byte
   printf("size of no is:%d\n ",sizeof(no));      //size of intiger =4 byte



    return 0;
}