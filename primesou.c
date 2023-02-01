#include<stdio.h>
void main()
{
    int num,i,rem,count=0;
    printf("the value of the number:\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)

    {
        rem=num%i;
        if (rem==0)
        {
            count=count+1;
        }
    }
    if (count ==2)
    {
        printf("%d  is prime number:\n",num);

    }
    else
    {
        printf("%d is composite number:\n",num);
    }


}
