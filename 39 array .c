#include<stdio.h>
void main()
{
    int a[20],i,n;
    printf("enter any elements:\n");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

}

