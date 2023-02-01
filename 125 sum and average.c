#include<stdio.h>
void main()
{
    float a[20],avg,sum=0;
    int n,i;
    printf("how many elements:\n");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("the total sum is:%f\n",sum);
    printf("the average of enter number is:%f",avg);

}
