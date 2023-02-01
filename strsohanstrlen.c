#include<stdio.h>
#include<string.h>
void main()
{
   int a[2][3],b[3][2],c[2][2],i,j,k;
   printf("entered first matrix elements:\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("elements in the pocket a[%d][%d]:",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("entered second matrix elements:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<2;j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   printf("first matrix elements:\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   printf("second matrix elements:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<2;j++)
       {
           printf("%d\t",b[i][j]);
       }
       printf("\n");
   }
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           c[i][j]=0;
           for(k=0;k<3;k++)
           {
               c[i][j]+=a[i][k]*b[k][j];
           }
       }
   }
   printf("the multiplication of the matrix is:\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           printf("%d\t",c[i][j]);
       }
       printf("\n");
   }
}
