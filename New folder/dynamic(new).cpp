//dynamic memory allocation
//malloc = new
//free =  delete

#include<iostream>

using namespace std;

int main()
{
   int arr[5];
   int *p = NULL;

  // p=(int*)malloc(sizeof(int)* 5);//(int*)=type casting   //in c

   p=new int[5]; //in c++
   // c++ madhe dynamic memory allocation kartna type casting karav lagat nahi
  
  if(p==NULL)
  {
      cout<<"unable to allocate the allocate the memory\n";

  }  else
  {
      cout<<"memory gets allocated successfully";
  }
  //free(p)      he c madhe ase lihale aste free karyla

  // c++ madhe 
  delete []p; // jr nuste p lihale aste tr fakto 100-104 memory delete zali aste
              // jr [] lihale tr purna arry che memory free hoil
   return 0;







