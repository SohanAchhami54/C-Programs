#include<stdio.h>
//int sum(int n);
void main()
{
    int n;
    printf("enter the value of the n:\n");
    scanf("%d",&n);
    printf("the sum :%d",sum(n));
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

