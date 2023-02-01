#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("sum of two number is:%d",sum(a,b));
}
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
