#include<stdio.h>
 void main()
{
    int num;
    int i;
    printf("enter the value of the n:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%2!=0)
        {
            printf("the given number is prime number:");
            break;
        }
            else if (num%2==0)
            {

            printf("the given number is  composite number:");
            break;
        }
    }

}

