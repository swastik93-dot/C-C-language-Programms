// problem is detect the error
#include<stdio.h>

int fun()
{
  auto int i = 10;
  
  register auto int j =20;     // 1st error-    cannot use t storage class at a time

  int ret =0;
  
   ret= i+j;                  // 2nd error-      j variable cannot be innitilize
   return ret;
}
int main()
{
    printf("inside main");

    fun();

    return 0;
}