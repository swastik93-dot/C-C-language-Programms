
#include<stdio.h>
#include<string.h>
//khali strlen  lahile mahnun  #include<string.h> lihale
int main()
{
    char arr[5]={'a','b','c','d','\0'};

    char brr[5]="abcd";

    printf("%s\n",arr);

    printf("%s\n",brr);

    printf("%c\n",arr[0]);
    printf("%c\n",arr[1]);
    printf("%c\n",arr[2]);
    printf("%c\n",arr[3]);


    printf("%c\n",brr[0]);
    printf("%c\n",brr[1]);
    printf("%c\n",brr[2]);
    printf("%c\n",brr[3]);


    printf("size of arr: %d\n",sizeof(arr));
    printf("size of brr: %d\n",sizeof(brr)); 

    //strlen  lahile mahnun vr #include<string.h> lihale
    printf("length of string is: %d\n",strlen(arr));//strlen che spling chukale hote mahnun error alti
    printf("length of string is: %d\n",strlen(brr));

 return 0;
}
