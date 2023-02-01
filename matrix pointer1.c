#include<stdio.h>
void main()
{
    int a[2][3],b[3][2],i,j,k;
    int c[2][2];
   int *p1[2][3];
    int *p2[3][2];
    int *p3[2][2];


    printf("enter the first matrix elements:\n");
    {

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            p1[i][j]=&a[i][j];
        }
    }
    }
    printf("the first matrix elements:\n");
    {
        for (i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",*p1[i][j]);
            }
            printf("\n");

        }
    }

     printf(" enter the second matrix elements:\n");
    {
        for(i=0;i<3;i++)
        {
          for (j=0;j<2;j++)
        {

          scanf("%d",&b[i][j]);
         p2[i][j]=&b[i][j];
        }
        }
    }
    printf("the second matrix elements:\n");
    {
        for (i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",*p2[i][j]);
            }
            printf("\n");

        }
    }




    printf("multiplication of the matrix is:\n");
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=0;
                for(k=0;k<3;k++)

                  {

                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    p3[i][j]=&c[i][j];
                  }
            }
        }
    }


        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",*p3[i][j]);
            }
            printf("\n");
        }
}
