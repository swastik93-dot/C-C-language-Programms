#include<iostream>
using namespace std;

int main()
{
    struct Demo
    {
        int no1;
        int no2;
    };

    
    typedef struct Demo DEMO;
    typedef struct Demo * PDEMO;
    typedef struct Demo **PPDEMO;

  typededf struct Demo
  {
    int no1;
    int no2;
  }DEMO , *pDEMO, **PPDEMO;
  
  //struct Demo obj;
  DEMO obj;

  //struct Demo *p = &obj;
  PDEMO p = &obj;

  //struct Demo **q = &p;
  PPDEMO q = &p;

  return 0;
}
  
