// amuzement park example
#include<stdio.h>
#define imarks iage //ithe = lihale hote mahnun error alti
                   // this isrite for just rev for preprocessor
                   // imarks convert in iage in hole programm
//0   to  10    =100
//10  to  40    =500 
//40  to  __    =300

int main()
{
   auto int imarks=0;

    printf("Enter your age: ");
    scanf("%d",&imarks);  //ithe & rahile mahnun error alti

    if((imarks>=0) && (imarks<=10))
    {
        printf("tickit ammount is: 100\n");
    }
    else if((imarks>=10) && (imarks<=40))
    {
        printf("tickit ammount is: 500\n");
    }
    else if(imarks>40)
    {
        printf("tickit ammount is: 600\n");
    }

    return 0;
}