  #include<stdio.h>

int main()

  {
    int a=23;

    const int A=40;// const ha data type modifire ahea ya ne vriable change karta yt nahi

   
    a++;
//  A++;     he possible nahi karan tithe vr 8th no line la const datatype qualifire vaparla ahea
    printf("%d\n",a);

    printf("%d\n",A);

    return 0;
  }