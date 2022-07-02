//creating own namespace
#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<< "MARVELLOUS INFOSYSTEM\n";

    }
}
int main()
{
 using namespace Marvellous;
 fun();

 return 0;
}