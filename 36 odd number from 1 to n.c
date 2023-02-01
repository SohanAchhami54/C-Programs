#include<stdio.h>
void main()
{
    int i,num;
    printf("enter any number:\n");
    scanf("%d",&num);
    printf("odd number from 1 to %d\n",num);
    for (i=1;i<num;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
    }
}
