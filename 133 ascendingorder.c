#include<stdio.h>
void main()
{
    int i,j,n,temp;
    int a[50];
    printf("how many elements do you want for sorting:\n");
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
        printf("after sorting the elements are:\n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
}
