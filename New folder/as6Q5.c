#include<stdio.h>
// problamtic
extern int i;
extern int j;
extern int Arr[4];

void gun();
int main()
{
    printf("value of i is %d\n",i);
    printf("value of j is %d\n",j);

    j=51;
    printf("value of j is %d\n",j);
    printf("value form Array  %d",Arr[0]);

    //fun();
    gun();

    return 0;

}
int j=21;
void gun()
{
    printf("inside gun");
}