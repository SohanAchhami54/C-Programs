#include<stdio.h>
void main()
{
    int a[2][3],trans[3][2],i,j;
    printf("enter the first matrix elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("matrix in pocket a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the first elements matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
}
