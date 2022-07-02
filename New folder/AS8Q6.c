
// question is detect the problem 
#  include<stdio.h>

auto int no=10;  // scope of auto is inside the block it is not use as global

void gun()
{
    register float fvalue = 20.3;
    printf("value  f is %f\n",fvalue);

}

int main()
{
    printf("inside main");

    gun();

    return 0;

}






