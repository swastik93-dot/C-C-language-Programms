
#include<stdio.h>
void demo()
{
  int a=10; //ya olit error alta function innitilize karyche rahile hote.

  a++;
  printf("%d\n",a);
  

}
int main()
{
  demo();   //kiti da pn call kale tari function yeakdach o/p madhe yat
            // karan jeva 2nd call karto tya vales 1st call kalale function nighun jate
                                                                       
  demo();
  return 0;
}