#include<stdio.h>

struct demo               //structure define kale  //1st time
{
    int i;
    int j;               // he don structure decleration ahea


};
struct Hello              //structure define kale  //2nd time
{
    float f;
    int no;              // he don structure decleration ahea


    struct demo dobj;    // struct hello madhe demo struct ghatle thycha object che nav dobj dile
                        // sequence =  hello -madhe- demo -madhe- i aani j
};

int main()               // program starts for runnning
{
    struct Hello hobj;   //ata hello cha obj tayar kela tyala nav hobj dile
    
    
    hobj.f=10.11;       //hobj madhla float tychi value 10.11 innitilize keli
    hobj.no=11;         //hobj madhla int tychi value 11 innitilize keli
    hobj.dobj.i=21;     //hobj madhala dobj tya madhla int i tyche value 21 innitilize keli
    hobj.dobj.j=51;     //hobj madhala dobj tya madhla float j tyche value 51 innitilize keli

    
    printf("%d\n",hobj.dobj.i);     //21
    printf("%d\n",sizeof(hobj));   //16   i+j+f+no
                                    //  4+4+4+4 = 16 


    return 0;
}