#include<stdio.h>
void main()
{
    int i, num,rem;
    printf("enter any number:\n");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is  even number",num);
    }
    else if (num%2!=0)
    {
        printf(" %d is odd number",num);
    }

}
