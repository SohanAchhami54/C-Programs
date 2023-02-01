#include<stdio.h>
void main()
{
    int i;
    int j;
    for (i=5;i<=10;i++)
    {
        for (j=1;j<=10;j++)
        {
          // int multiply=i*j;
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
}
