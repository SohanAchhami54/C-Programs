#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    int *ptr1[3][3];
    int *ptr2[3][3];
    int *ptr3[3][3];
    printf("enter the first matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("the matrix elements in the pocket:a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            ptr1[i][j]=*(a+i)+j;
        }
    }
    printf("the first matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*ptr1[i][j]);
        }
        printf("\n");
    }



      printf("enter the second matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("the matrix elements in the pocket:a[%d][%d]",i,j);
            scanf("%d",&b[i][j]);

            ptr2[i][j]=*(b+i)+j;
        }
    }
    printf("the second matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*ptr2[i][j]);
        }
        printf("\n");
    }

     printf("sum of the two matrix is:\n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
              c[i][j]=*ptr1[i][j]+*ptr2[i][j];
              ptr3[i][j]=*(c+i)+j;
          }
      }


      //  printf("the sum of the pointer in the form of matrix is:\n");

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",*ptr3[i][j]);
            }


            printf("\n");
        }


}
