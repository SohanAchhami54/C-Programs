#include<stdio.h>


void main()
{
    int n,sumN;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    sumN=sum(n);
    printf("sum is:%d",sum(n));
}

int sum(int n)
{


if (n==1)
{

    return 1;
}
int sumNm1=sum(n-1);
int sumN=sumNm1+n;
return sumN;
}
