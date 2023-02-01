#include<stdio.h>
int *returnpointer(int *p,int n)
{
    p=p+n;
    return p;
}

void main()
{
    int i,*p;
    int arr[]={11,22,33,44,55};
    i=2;
    p=returnpointer(arr,i);
    printf("after incrementing by 2 is:\n");
    printf("%d",*p);
}
