#include<stdio.h>
void main()
{
    int n,i;
    int count=0;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("prime number\n");
    }
    else
    {
        printf("composite number");

    }


}
