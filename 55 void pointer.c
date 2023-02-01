#include<stdio.h>
void main()
{
    int a=10;
    float b =4.5;
    void *p;
    p=&a;
    printf("a=%d\n",*((int *)p));
    p=&b;
    printf("b=%f\n",*((float *)p));
}
