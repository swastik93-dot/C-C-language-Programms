#include<stdio.h>

void demo()
{
    auto int a=10;

    a++;
    
    printf("%d\n",a);

}
void hello()
{
    static int k=10;

    k++;
    
    printf("%d\n",k);

}
int main()
{
    demo();            //jehva demo 2da call kela teva 9 line varche yekda +last call ase donda 11 print zale
    demo();

    hello();          //pn jehva hello call kela ty vales 10 he inriment karun ykda
                      // aani te static ne store houn parat incriment karun 12 yekda print zale
    hello();

    return 0;
}

