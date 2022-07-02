#include<iostream>
using namespace std;
 namespace Swastik
{
    void fun()
    {
        cout<<"inside swastik namespace";
    }

}
int main()
{
  using namespace Swastik;

  Swastik::fun();

  int input = 0;

  enum Gender{Male = 1, Female = 0};
  {
      

      cout<<"\n";
      cout<<"Male = 1\n";
      cout<<"Female = 0\n";
      cout<<"\nEnter your gender: ";
      cin>>input;

      switch(input)
{
      case Female:
        cout<<"your tax free limit is : 3,00,000\n";

        break;

      case Male:
        cout<<"your tax free limit is : 2,50,000\n";  

        break;

      default:
      cout<<"Invalid Gender\n"  ;
        }
  }


}