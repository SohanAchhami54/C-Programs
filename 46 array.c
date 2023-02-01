#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    int len;
    printf("enter your name:\n");
    scanf("%s",&name);
    len=strlen(name);
    printf("the digit of the enter name is: %d",len);

}



