#include<stdio.h>
void main()
{
    int i,j,num,count=0;
    printf("enter any number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
     {

      for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
      //  printf("the prime number from 2 to %d is:\n",num);

    if(count==2)
    {
        printf("%d\t",i);
    }
    count=0;

     }
}

