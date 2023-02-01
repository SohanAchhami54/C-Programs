#include<stdio.h>
void main()
{
    int a[3][3],i,j,f=0;
    printf("enter matrix........\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("elements in pocket a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j & a[i][j]!=1)
            {
                f=1;
                break;
            }
            else if (i!=j & a[i][j]!=0)
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    {
        printf("\nthe matrix is identity matrix:\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nmatrix is not identical matrix");
    }
}
