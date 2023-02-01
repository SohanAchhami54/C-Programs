#include<stdio.h>
void main()
{
    int i,n;
    printf("enter any number:\n");
    scanf("%d",&n);
    printf("all odd number from 1 to %d is:\n",n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
    }
}
