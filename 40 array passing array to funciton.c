#include<stdio.h>
void change(int a[])
{
       int i;
       for (i=0;i<5;i++)
        a[i]=a[i]*4;
}
void main()
{
    int i;
    int a[5]={1,2,3,4,5};
    printf("before calling the function is:\n");
    for(i=0;i<5;i++)
       printf("%d\t",a[i]);
    change(a);
    printf("\n after calling the function is:\n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
}
