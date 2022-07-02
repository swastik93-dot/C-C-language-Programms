#include<iostream>
using namespace std;

class demo    //memory allocated to demo- 12
{
    public:
    //int i=30;    he chalat nahi karan memory decleration ahea
    int i;
    private:
    int j;
    protected:
    int k;
};

class hello : public demo   //  memory allocated to hello- 24
{
    public:
    int x;
    private:
    int y;
    protected:  //emmmidiate porala dya ex- piyush che estate era la pn era chya muli la dychi ka nah he era tharvnar
    int z;
};

int main()
{
demo dobj;  // demo class cha obj create kela 
dobj.i;
//dobj.j;   // access hot nahi karan privet mule
//dobj.k;   // nahi karan only porala denar naked la nahi


hello hobj;  // hello  class cha obj create kela
hobj.x;    //allow 
//hobj.y;     // not allowed
//hobj.z;   // not allowed


hobj.i;  //allowed
//hobj.j;  //NA
hobj.k;  //allowed   kran protected ahea refer varche example sir ani daughter

return 0;
}


// jr protected enherate hot nasel tr to vapuru naye
//ex salman khan ne tyche porychya navavar property ghau naye
 