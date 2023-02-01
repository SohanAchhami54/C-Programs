#include<stdio.h>
#include<stdio.h>
void main()
{
    char a[]="TRIBHUVAN UNIVERSITY";
    int i,count=0;
    int len;
    len=strlen(a);

    for(i=0;i<len;i++)
    {
        if (a[i]=='I')
        {
            count=count+1;
        }
    }
    printf("number of I is:%d",count);
}
