#include<stdio.h>

int main()
{
    auto int istd=0;

    printf("enter your standard:");
    scanf("%d",&istd);

    switch (istd)   
    {
        case 1:    
        printf("your exam time is at 1\n");
        break;

        case 2:
        printf("your exam time is at 2\n");
        break ;

        case 3:
        printf("your exam time is at 3\n");
        break;

        case 4:
        printf("your exam time is at 4\n");
        break;

        case 5:
        printf("your exam time is at 5\n");
        break;
        
        default:
        printf("invalied standard\n");
        break;
    
    }
    return 0;
}