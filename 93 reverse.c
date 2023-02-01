#include<stdio.h>
void main()
{
    int n,R,temp,rev=0;
    printf("enter any number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        R=n%10;
        rev=rev*10+R;
        n=n/10;
    }
    printf("the reverse of the string is:%d",rev);

    if(temp==rev)
    {
        printf("\n%d is: palindrome number\n",rev);
    }
    else
    {
        printf("\n%d is not palindrome number:\n",rev);
    }
}
