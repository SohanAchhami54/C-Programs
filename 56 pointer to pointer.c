#include<stdio.h>
void main ()

{
    int a=20;
    int *p;
    int **q;
    p=&a;
    q=&p;
    printf("the content in p is:%d\n",*p);
    printf("the content in q is:%d",**q);

}
