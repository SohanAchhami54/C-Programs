#include<stdio.h>
void main()
{
    int i,n;
    int fact=1;
    printf("enter the value of the n:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact =fact*i;
        printf("the factorial of the given number is:%d\n",fact);
    }
}
