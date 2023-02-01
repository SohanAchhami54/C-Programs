#include<stdio.h>
void main()
{
   int rem,rev=0;
   int n;
   printf("enter any number:\n");
   scanf("%d",&n);
   while(n>0)
   {
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
   printf("the number in reverse form is:%d",rev);
}
