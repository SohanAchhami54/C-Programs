#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],mul[2][2],i,j,k;
    printf("enter the first matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the first matrix elements:\n");

       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");

    }

    printf("enter the second matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

     printf("the second matrix elements:\n");

       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");

    }

    printf("the multiplication of the matrix:\n");

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                mul[i][j]=0;
            for(k=0;k<3;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }

    }


      for(i=0;i<2;i++)
      {
          for(j=0;j<2;j++)
         {
              printf("%d\t",mul[i][j]);
         }
          printf("\n");
      }

}

