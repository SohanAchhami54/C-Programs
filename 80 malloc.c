#include<stdio.h>
void main()
{
    int i,n;
    int *p;
    printf("enter the size of blocks\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the elements\n");
    for(i=0;i<n;i++)

        scanf("%d",p+i);

    printf("the elements are:\n");
    for(i=0;i<n;i++)

        printf("%d\t",*(p+i));
}

