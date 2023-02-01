#include<stdio.h>
#define m 2
#define n 3
void main()
{
    int (*a)[n];
    int (*b)[n];
    int (*sum)[n];
    int i,j;
    printf("enter the first matrix elements:\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    printf("the elements of the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }

}
