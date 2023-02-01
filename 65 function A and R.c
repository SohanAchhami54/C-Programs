#include<stdio.h>
int addition(int x,int y)
{
    int sum=x+y;
    return sum;
}
void main()
{
    int a,b,sum;
    printf("enter any number\n");
    scanf("%d%d",&a,&b);
    sum=addition(a,b);
    printf("sum is:%d",sum);
}
