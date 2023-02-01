#include<stdio.h>
void main()
{
    float a[10],sum=0,avg;
    int i,n;
    printf("enter any number:\n");
    scanf("%d",&n);
    printf("enter %d number:\n",n);
    for(i=0;i<n;i++)
    {

        scanf("%f",&a[i]);
    }
        for(i=0;i<n;i++)
       {
        sum=sum+a[i];
        avg=sum/n;
       }
    printf("the sum of the total enter number is:%f\n",sum);
    printf("the average of the total enter number is:%f",avg);
}
