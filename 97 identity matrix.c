#include<stdio.h>
void main()
{
    int a[3][3],i,j,f=0;
    printf("enter the matrix elements:\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
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
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i!=j & a[i][j]!=0)
            {
                f=1;
                break;
            }
        }
    }

    if(f==0)
    {
        printf("the matrix is identical matrix:\n");
        for (i=0;i<3;i++)
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
        printf("matrix is not identical matrix:\n");
    }
}

