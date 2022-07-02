// create  array of structure object
# include<stdio.h>

struct demo
{
    int i;
    int j;
    float k;
};
int main()
{
    struct demo arr[4]; // array tayar kela

arr[0].i=12;               //    | 12   | 1    |  12    |      
arr[0].j=20;               //    |20    |  0   |   200  |      
arr[0].k=21.2;             //    |21.2  |  1.2 |  2.2   |      

arr[1].i=1;
arr[1].j=0;
arr[1].k=1.2;

arr[2].i=12;
arr[2].j=200;
arr[2].k=2.2;

printf("%d\n",sizeof(arr)); // 48
printf("%d\n",arr); // address yail

    return 0;


}
