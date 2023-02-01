#include<stdio.h>
void main()
{
    int i,n;
    int *p;
    printf("enter the elements in the array is:\t");
    scanf("%d",&n);
    p=(int *)malloc(n* sizeof (int));
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("elements in the array are:\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",*(p+i));
    }
 
}
