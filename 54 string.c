#include<stdio.h>
void main()
{
  int a[10][10];
  int b[10][10];
  int c[10][10];
  printf("enter the first matrix elements:\n");
  readfirstmatrix(a);
  printf("enter the second matrix elements:\n");
  rsmatrix(b);
  printf("sum of the first and second matrix:\n");
  rsummatrix(a,b);
}

   void readfirstmatrix (int a[2][2])
{
    int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the first matrix elments:\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void rsmatrix(int b[][2])
{
     int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the second matrix elments:\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

}
void rsummatrix(int c[][2],int a[][2],int b[][2])
{
    int i,j;
    //int a[2][2],b[2][2];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

