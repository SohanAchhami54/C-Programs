#include<stdio.h>
void addition(int a,int b)
{
    int sum=a+b;
    printf("sum is:%d",sum);
}
void main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    addition(a,b);
}
