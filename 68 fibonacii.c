#include<stdio.h>
void main()
{
    int n,i;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\t",fibo(i));
}
int fibo(int a)
{
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else
        return fibo(a-1)+fibo(a-2);
}
