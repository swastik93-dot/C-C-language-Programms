#include<stdio.h>

extern int A;        // extern storage class vaprun external value access ELI.

int y=23;           //global statement


int main()
{
     printf("%d",A);
    return 0;
}
/* on compiler command
   
   gcc extern.c extern2.c -o my exe*/