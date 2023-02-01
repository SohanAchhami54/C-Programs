#include<stdio.h>
void main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("sum of natural number is:%d",sumN(n));
}
int sumN(int a)
{
    if (a==0)
        return 0;
    else
     return   a+ sumN(a-1);

}
