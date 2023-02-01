#include<stdio.h>
void main()
{
    int i,j,n,count=0;
    int sum=0;
    printf("enter any number:\n");
    scanf("%d",&n);
    printf("prime number from 1 to %d is:\n",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            printf("%d\t",i);
        }
        count=0;

    }

}
