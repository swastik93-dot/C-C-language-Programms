#include<iostream>
using namespace std;
//#define max 10  //max la 10 ni replace kr

int main()
{
    typedef int number;      //int la number mahanyche 
    typedef char letter;     //char la letter manayche

   number no = 10;
   letter ch ='a';//ithe '' lihale nahi mahnun error alti
   
   
   cout<<sizeof(no)<<"\n";  //4
   cout<<sizeof(ch)<<"\n";  //1
  
    return 0;
}