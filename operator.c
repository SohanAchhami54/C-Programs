#include<stdio.h>
void main()
{
    int a=2;
    int b=3;
    int x1,x2,x3,x4;
    x1=a<b&&b>a;
    x2=a<b&&b<a;
    x3=a==b||a<b;
    x4=a>b||b>a;
    printf("x1=%d\n x2=%d\n x3=%d\n x4=%d\n",x1,x2,x3,x4);
}
