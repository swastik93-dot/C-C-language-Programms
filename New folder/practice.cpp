#include<iostream>
using namespace std;

int main()
{
   int input = 0;

   enum Gender{male= 1,Female = 2};

   cout<<"Enter the Gender: \n";
  cout<<"Male: 1\n ";
  cout<<"Female: 2\n";

cin>>input;
  switch(input)
  {
    case male:

    cout<<"tax free limit is 2,50,000\n";
    break;

    case Female:
    cout<<"Tax free limit is 3,00,000\n";
    break;

    default:
    cout<<"invalied gender";
    


  }
    return 0;
}