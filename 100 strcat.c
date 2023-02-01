#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    char b[20];
    printf("enter the character of first string");
    scanf("%s",&a);
    strcpy(b,a);
    printf("the value at second strinf is:%s",b);
}
