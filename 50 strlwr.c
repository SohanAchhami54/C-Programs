#include<stdio.h>
void main()
{
    char name[10];
    printf("enter any character:\n");
    scanf("%s",&name);
    strlwr(name);
    printf("string in lowercase is:%s",name);
}
