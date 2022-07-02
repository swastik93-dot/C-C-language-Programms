# include<stdio.h>

int main()
{ 
   float f=6.10;
    double d=34;
 

  printf("%d",sizeof(d));

  printf("%d",sizeof(11));  //4
 
  printf("%d",sizeof(6.10)); // yache ans 4 expected hote pn ans 8 yail
                         //karan sizeof oprator  . madhle value default double consider hote
 
  printf("%d",sizeof(6.10f));// 4 karan apan 4 mension kale
    
    return 0;
}


/* 
char arr[05];
printf("enter your name");
scanf("%s",arr);
scanf(" %[^'\n']s",arr);
}*/