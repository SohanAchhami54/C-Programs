#include<stdio.h>
void main()
{
    int a[5];
    int i;
    printf("enter the elements:\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",a+i);
    }
    printf("the elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",*(a+i));
    }
}


