#include<stdio.h>
union student
{
    char name[20];
    int roll;
};
void main()
{
    union student s;
    printf("student name:\t");
    scanf("%s",&s.name);
    printf("student roll:\t");
    scanf("%d",&s.roll);
    printf("\n the student details is:\n");

    printf("student name is:%s",s.name);
    printf("student roll is:%d",s.roll);
};
