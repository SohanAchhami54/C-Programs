#include<stdio.h>
void main()
{
    int a=5;
    void *p;
    p=&a;
    printf("the value of a is:%d",*(int*)p);
}
