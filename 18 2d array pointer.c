#include<stdio.h>
void main()
{

    int i,j;
    int (*a)[2],(*b)[2];
    printf("enter the first matrix elements:\n");
    for(i=0;i<2;i++)

        for(j=0;j<2;j++)

        scanf("%d",(*(a+i)+j));


    printf("the first matrix elements:\n");
    for(i=0;i<2;i++)

        for(j=0;j<2;j++)

            printf("%d\t",*(*(a+i)+j));

       printf("\n");


     printf("enter the second elements:\n");
     for(i=0;i<2;i++)

        for(j=0;j<2;j++)

        scanf("%d",(*(b+i)+j));



   printf("the second matrix elements:\n");
    for(i=0;i<2;i++)

        for(j=0;j<2;j++)

            printf("%d\t",*(*(b+i)+j));

       printf("\n");


}
