#include<stdio.h>
void main()
{
    int i,s=0;
    for(i=1;i<=10;i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
    }
    printf("sum of 10 odd number is:%d\n",s);
}
