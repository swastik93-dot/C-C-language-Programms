#include<stdio.h>

int main()
{

   int no =10;

   int x=&no;

   

   int *p=&no;

   int **q=&p; // * is a pointer

  int ***a=&q; // jit ya vela * the#ceda vela vr jyche, ex( value of****c) manje c he p r jaun thambel aani p chi value display hoil
  int****b=&a;
  int*****c=&b;


  printf("%d\n",p);// p cha data alocation zalale value yail


  printf("%d\n",sizeof **q); // ans 4 yail

    return 0;
}