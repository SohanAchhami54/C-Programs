#include<stdio.h>
void main()
{
int n,sum;
printf("enter the value of n:\n");
scanf("%d",&n);
sum=sumN(n);
printf("the sum is:%d",sum);
}
int sumN(int n)
//int n, sum=0;
{

if (n==1)

    return 1;

int sumNm1=sum(n-1);
int sumN=sumNm1+n;
return sumN;
}
