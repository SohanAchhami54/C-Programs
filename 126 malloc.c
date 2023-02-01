#include<stdio.h>
void main()
{
    int n;
    int i;
    printf("enter any number:\n");
    scanf("%d",&n);
    printf("the fibonacci is series:\n");
    for(i=1;i<=n;i++)
        printf("%d\t",fibo(i));
}
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
