#include<stdio.h>
#include<stdlib.h>
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

        printf("\n enter next size of blocks is:\n");
        scanf("%d",&n);
        p=realloc(p,n*sizeof (int));
        printf("enter next elements\n");
        for(i=0;i<n;i++)
            scanf("%d",p+i);
        printf("the final elements are:\n");
        for(i=0;i<n;i++)
            printf("%d\t",*(p+i));
//            free(p);
//            printf("%\nd\n",*(p+i));

}

