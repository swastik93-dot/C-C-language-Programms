
// nested structure

# include <stdio.h>

struct Demo      // first structure
{
    int i;     
    int j;
};
struct Hello    // second structure
{
    float k;
    double l;
    struct Demo dobj;  // nested structure  , struct hello madhe struct demo insert kale ahea
};

int main()
{
    struct Hello hobj; // struct hello cha object create kela

   hobj.k=20.12;  //h obj madhe value takli mahanje 2nd structure madhe
    hobj.l=21.3434;

   hobj. dobj.i=51;  // hobj madhle dobj madhle i tyche value 51 ase
   hobj. dobj.j=101;

    printf("%d\n",hobj.k);
     printf("%d\n",&hobj.k);
      
    return 0;
}
