#include<stdio.h>

int main()
{
    int ivalue =11;
    char cvalue='A';
    float fvalue=10.11;
    double dvalue=20.11;

 void *ptr=NULL;
 ptr=&ivalue;
 printf("%d\n",*(int *)ptr);//(int *) =ya ne void pointer la sangitle  to intiger pointer ahea
//o/p=11
//(int *)    this is called type casting

ptr=NULL;
ptr=&fvalue;

printf("%f\n",*(float*)ptr);
//(float *) =ya ne void pointer la sangitle  to float pointer ahea
//mg atta 10.11 run hoil


printf("%f\n",*(char*)ptr);
//(char *) =ya ne void pointer la sangitle  to charactor pointer ahea
//mg atta "A" run hoil

    return 0;
}
