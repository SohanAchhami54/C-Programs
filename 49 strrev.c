#include<stdio.h>
void main()
{
    char name[10];
    printf("enter the character:\n");
    scanf("%s",&name);
    strrev(name);
    printf("the reverse of the enter character is:%s",name);
}
