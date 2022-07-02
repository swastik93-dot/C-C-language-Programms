#include<stdio.h>

int main()
{
 auto int istd=0;

 printf("enter your standard:");
 scanf("%d",&istd);

 if (istd == 1)
 {
     printf("your exam time is:8 AM");
 }
else if (istd == 2)
 {
     printf("your exam time is:9 AM");
 }
 else if (istd == 3)
 {
          printf("your exam time is:10 AM");
 } 
else if (istd == 4)
 {
     printf("your exam time is:11 AM");
 }
 else if (istd == 5)
 {
     printf("your exam time is:12 AM");

 }
 else
 {
     printf("this is not valied standerd");
 }
    return 0;

}    