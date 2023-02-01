#include<stdio.h>
void main()
{

int a=20;
    int *ptr=&a;
    int **q=&ptr;
    printf("the value is at q is :%d\n",**q);
    printf("the address of a is:%d",&a);
}
