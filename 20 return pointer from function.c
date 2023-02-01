#include<stdio.h>
int *add(int a, int b)
{
    int c= a+b;
    return c;
}
void main ()
{
    int *ptr;
    ptr=add(100,200);
    printf("sum of the two number is:%d",ptr);
}
