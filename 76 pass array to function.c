#include<stdio.h>
void display(int n)
{
    printf("%d\t",n);
}
void main()
{
    int a[5]={1,2,3,4,5};
    int i;
    printf("the array elements......\n");
    for(i=0;i<5;i++)
        display(a[i]);
}
