#include<iostream>
using namespace std;

int main()
{                  
    int no = 11;   
    int&x = no;    
    int&y = &no;   
    
    int*(&q) = p;  //create referance to pointer
 
    return 0;
}