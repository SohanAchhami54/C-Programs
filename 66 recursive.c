#include<stdio.h>
void main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("factorial of enter number is:%d",fact(n));
}
int fact(int a)
{
    if (a==1)
        return 1;
    else
        return (a*fact(a-1));
}
