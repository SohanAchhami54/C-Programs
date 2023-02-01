#include<stdio.h>
void main()
{
    int i,n;
    int *p;
    printf("enter the elements in the array:\n");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int));

    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}
