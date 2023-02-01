#include<stdio.h>
void main()
{
    int marks[3];
    int i;
    printf(" enter marks of math,science,social:\n");
    for (i=0;i<3;i++)
    {
    scanf("%d",&marks[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("marks[%d]=%d\n",i,marks[i]);
    }

}
