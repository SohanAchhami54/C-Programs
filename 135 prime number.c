#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("enter any number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("%d is prime number:\n",n);
    }
    else
    {
        printf("%d is not prime number:\n",n);
    }
}
