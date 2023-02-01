#include<stdio.h>
void main()
{
    int n,i;
    long fact=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       fact=fact*i;
       printf("the factorial number is:%ld",fact);
}
