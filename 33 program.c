#include<stdio.h>
void main()
{
    int i,j,a[2][3],transpose[3][2];
  //printf("enter the elements in the first matrix:\n");
    for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
             printf("entered in the pocket a[%d][%d]:",i,j,a[i][j]);
            scanf("%d",&a[i][j]);


        }
    }
    printf("the elements we have entered:\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }


      printf("transpose of the given  matrix is:\n");

   for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
             //printf("entered in the pocket a[%d][%d]:",i,j,a[i][j]);
            transpose[j][i]=a[i][j];


        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }

}

