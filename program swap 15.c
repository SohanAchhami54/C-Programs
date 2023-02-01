#include<stdio.h>
void main()
{
    int x,y,temp;
    printf("enter the value of a and b is:\n");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("the value after swap is:a=%d\tb=%d",x,y);
}
