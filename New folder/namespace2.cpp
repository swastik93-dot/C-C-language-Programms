//own  two name space creation
#include<iostream>
namespace Marvellous  //ithe semicolon nahi karan to datatype naHI
{
    void fun()
    {  
          std::cout<<"inside fun"<<"\n";
          std::cout<<"jay ganesh..."<<"\n";
    }
}

namespace Infosystem  
{
    void fun()
    {  
          std::cout<<"inside fun"<<"\n";
          std::cout<<"jay ganesh..."<<"\n";
    }
}


int main()
{
  using namespace Marvellous;//ithe namespace use kela
  using namespace Infosystem;

//jr dohni kade same function asel tr namespace che nav::function che nav detat
  Infosystem::fun(); // Infosystem madhle fun access karyche mahnun :: vaparla

    return 0;
}