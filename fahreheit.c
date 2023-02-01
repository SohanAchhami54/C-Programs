#include<stdio.h>
void main()
{
    float num[20],avg,sum=0;
   int i,n;
   printf("enter the number\n");
   scanf("%d",&n);
   printf("enter %d number\n",n);
   for(i=0;i<n;i++)
   {
       printf("a[%d] number is:",i);
       scanf("%f",&num[i]);
   }
   for(i=0;i<n;i++)

       sum+=num[i];
       avg=sum/n;
       printf("sum of the number is:%f\n",sum);
       printf("the average number is:%f",avg);


}
