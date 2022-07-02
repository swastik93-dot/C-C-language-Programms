# include<stdio.h>

int main()
{ 
    auto int Marks = 0;//auto muddam lahile

    printf("Enter your marks:");
    scanf("%d",&Marks);

    printf("%d",Marks);

   if(Marks >=60)
   {
       printf("\n1st class");
   }
   else
   {
       printf("\nNot first class");
   }
   
    return 0;
}