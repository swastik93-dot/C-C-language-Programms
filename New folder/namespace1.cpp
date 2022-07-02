//own name space creation
#include<iostream>
namespace Marvellous  //ithe semicolon nahi karan to datatype naHI
{
    void fun()
    {  
          std::cout<<"Marvellous inside fun"<<"\n";
          std::cout<<"jay ganesh..."<<"\n";
    }
}

namespace Infosystem  
   {
    void fun()
    {  
          std::cout<<"Infosystem inside fun"<<"\n";
          std::cout<<"jay ganesh..."<<"\n";
    }
}




int main()
{
  using namespace Marvellous;//ithe namespace use kela
  
  fun();   //logic fun madhe lihale mahnun ithe fun lihale

  
    return 0;
}