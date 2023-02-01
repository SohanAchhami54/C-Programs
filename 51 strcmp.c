#include<stdio.h>
void main()
{
    char a[10],b[10];
    int diff;
    printf("enter the first and second string:\n");
    scanf("%s%s",&a,&b);
    diff=strcmp(a,b);
    if(diff>0)
    printf("first string is greater than the second string:\n",a,b);
    else if(diff<0)
    printf("first string is lesser than the second string:\n",a,b);
    else
    printf("first string is equal to the second string:\n",a,b);

}
