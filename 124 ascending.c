#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp;
    printf("how many elements do you want:\n");
    scanf("%d",&n);
    printf("enter the %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The number in asdending order is:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
