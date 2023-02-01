#include<stdio.h>
void main()
{
    int a,b;
    a=99;
    b=89;
    printf("before calling function are:%d\t%d",a,b);
    swap(&a,&b);
    printf("\n after swapping a and b are: %d\t%d",a,b);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
