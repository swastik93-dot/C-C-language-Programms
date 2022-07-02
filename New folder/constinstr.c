#include<stdio.h>
//constant in structure

//ya code madhe mala main function madhe member by member innitilization karta ale nahi
struct demo
{

    int i;
    int j;
};
int main()
{
    const struct demo obj={11,21};//const vaparle 

    
    printf("%d\n",obj.i); // '.'lihale nahi mahnun error alti
    printf("%d\n",obj.j);
    return 0;

    //  o/p =11    21
}




//second way

/*
#include<stdio.h>


struct demo
{

   const int i;      //direct ithe const lihale
   const int j;
};
int main()
{
    struct demo obj = {11,21};

    printf("%d\n",obj.i);//. lihale nahi mahnun error alti
    printf("%d\n",obj.j);
    return 0;

    //  o/p =11    21
}
*/


