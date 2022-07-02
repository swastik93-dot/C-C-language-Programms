//file Handling

# include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>//file control

int main()
{
  char fname[30];
  int fd = 0;

  printf("Enter the file name that you want to create\n");
  scanf("%s",fname);//& nahi karan array che nav internally consider as address

  fd = creat(fname,0777);
  if(fd == -1)//jr create nahi karta ali tr -1
  {
      printf("unable to create file\n");

  }
  else
  {
      printf("File is succesfully created with fd:%d\n",fd);
  }
    return 0;
}
//User 
//Owner         // 4 + 2 + 1
//Group
//Other

//oprations
//read       4
//write      2    //this number officially given
//Execute    1
