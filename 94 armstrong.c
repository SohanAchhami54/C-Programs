#include<stdio.h>
void main()
{
    int n,r,c,sum=0;
    printf("enter the number that you want to armstrong:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    printf("the armstrong of the enter number is:%d",sum);
}
