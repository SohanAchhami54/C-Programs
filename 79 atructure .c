#include<stdio.h>
#include<string.h>
void main()
{
    struct student
    {
        char name[20];
        char code[20];
        int ch;
    };
    int i;
    struct student s[2];
    printf("enter the record of 5 student:\n");
    for(i=0;i<2;i++)
    {
        printf("student name\n");
        scanf("%s",&s[i].name);
        printf("student code\n");
        scanf("%s",&s[i].code);
        printf("student ch\n");
        scanf("%s",&s[i].ch);
    }
    printf("the student record\n");
    for(i=0;i<2;i++)
    {
        if(s[i].ch>3)
        {
            printf("student name=%s\n student code=%s\n student ch=%d\n",s[i].name,s[i].code,s[i].ch);
        }
    }
}
