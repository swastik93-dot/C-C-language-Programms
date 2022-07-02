# include<stdio.h>


void demo()
{
    auto int A = 10;         //default storage calss=auto
    A++;
    printf("%d\n",A);       //op=11
}
void hello()
{
    static int A = 10;     //static storageclass use 
    A++;
    printf("%d\n",A);     //op =11

}
int main()
{
    demo();               //function call
                          // yedach rutern hote ya thini 2 da demo call le pn last function call consider la jato
    demo();               //op=11
                          // vr auto storage class vaprla ahea so value store hot nahi


    hello();              //function call
    hello();              //static function call vaparla hota so value store houn op yail
                         //op=12

    return 0;    
}