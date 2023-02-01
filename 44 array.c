#include<stdio.h>
void main()
{
    int i,n;
    printf("enter any number:\n");
    scanf("%d",&n);
    odd(n);
}
 void odd(int a)
{
        if(a%2!=0)
        {
            printf("%d is odd number:\n",a);
        }
        else
        {
            printf("%d is even number:",a);
        }
}
