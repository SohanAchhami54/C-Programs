#include<stdio.h>
void main()
{
    int (*a)[3];
    int i,j;
    printf("the elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",*(a+i));
        }
    }
    printf("the elements are:\n");
    for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",*(*(a+i)));
       }
       printf("\n");
   }
}
