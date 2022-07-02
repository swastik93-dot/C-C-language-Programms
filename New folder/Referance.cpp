// rahul pappu example dilte ty vales 
#include<iostream>

using namespace std;

int main()
{
    int no = 11;

    int&x = no;// & oprator =chya adhi asel tr tyala referance oprator mhntat

    int*p =&no;
    //ithe & ha address of oprator asto

    return 0;
}

// no            11
//&no            100
//x              11
//&x             100
//p              100
//*p             11
//&p             200
//siof(no)       4
//siof(x)        4
//siof(p)        8