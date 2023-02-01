#include<stdio.h>
void main()
{
    int n,i,*p;
    printf("enter the size of blocks:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",*(p+i));

    printf("\nenter the size of new blocks:\n");
    scanf("%d",&n);
    realloc(p,n*sizeof(int));
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(p+i));
    free(p);
    printf("\nafter freeing the elements is:\n");
    printf("%d\n",*(p+i));
}
