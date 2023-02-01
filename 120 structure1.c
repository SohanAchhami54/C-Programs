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
        printf("student name:\t");
        scanf("%s",&s[i].name);
        printf("student code:\t");
        scanf("%s",&s[i].code);
        printf("student ch:\t");
        scanf("%d",&s[i].ch);

    }
    printf("\n\n the student record\n");
    for(i=0;i<2;i++)
    {
        if(s[i].ch>3)
        {
            printf("name\t\t code\t\tch");
            printf("\n\n");
            printf("%s\t\t %s\t\%d",s[i].name,s[i].code,s[i].ch);
        }
    }
}





