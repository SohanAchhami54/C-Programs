#include<stdio.h>
void main()
{
    struct student
    {
        char name;
        float mark;
    };
    struct student s[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("the details of the book is:\n");
        printf("name:\t");
        scanf("%s",&s[i].name);
        printf("Mark:\t");
        scanf("%f",&s[i].mark);
    }
    printf("the details of the student is:\n");
    printf("Name\t\tMark\n");
    printf("\n\n");
    for(i=0;i<2;i++)
    printf("%s\t\t%f\n",s[i].name,s[i].mark);
}
