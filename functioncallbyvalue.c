#include<stdio.h>
void main()
{
     int a=99;
     int b=89;
     printf("before calling the function are:%d\t%d",a,b);
     swap(a,b);
     printf("\n after calling the function are:%d\t%d",a,b);
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nthe values within function are:%d\t%d",x,y);
}
