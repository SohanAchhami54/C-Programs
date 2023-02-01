#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("enter any number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i ==0)
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
        printf("%d is composite number:\n",n);
    }

}
