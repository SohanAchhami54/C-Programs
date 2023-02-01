#include<stdio.h>
void main()
{
    int n,rem;
    printf("enter any number:\n");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%11==0)
        {
            printf("%d number is divisible by 5 and 11\n",n);
        }
        else
        {
          printf("%d number is divisible by 5 but not by 11",n);
        }

    }
    else
    {
        printf("%d number is neither divisible by 5 not by 11\n",n);
    }

}
