#include<stdio.h>
int *returnpointer(int *p,int n)
{
    p=p+n;
    return p;
}
void main()
{
    int i,*p;
    i=2;
    int arr[]={11,22,33,44,55};
    p=returnpointer(arr,i);
    printf("after increment by 2:\n");
    printf("%d",*p);
}
