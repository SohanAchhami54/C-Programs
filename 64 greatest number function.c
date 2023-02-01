#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d i.e. a is the greatest number\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d i.e b is the greatest number\n",b);
    }
    else
        printf("%d i.e c is the greatest number",c);
}
