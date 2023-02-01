#include<stdio.h>
void main()
{
    int a1,a2,s;
    printf("enter the two value\n");
    scanf("%d%d",&a1,&a2);
    s=sum(a1,a2);
    printf("the sum of the two number is:%d",s);

}
int sum(a,b)
{
    int result=a+b;
    return result;
}
