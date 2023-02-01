#include<stdio.h>
void main()
{
    int num,i;
    printf("enter any number:\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
        }
        //printf("\n");
    }


}
