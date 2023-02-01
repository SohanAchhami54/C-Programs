#include<stdio.h>
void main()
{
    int a=45;
    int *p=&a;
    int j= *p;
    printf("the value stored at j is:%d\n",j);
    printf("the address of the P is:%d",p);
  //  printf("the address of the a is :%d",a);
}
