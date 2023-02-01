#include<stdio.h>
struct student
{
    char name[20];
    int roll;
};
void main()
{
    struct student s;
    printf("Name of the student:\t");
    scanf("%s",&s.name);
    printf("roll number of the student:\t");
    scanf("%d",&s.roll);
    printf("The details of the student is:\n");
    display(s);
}
void display(struct student s)
{
    printf("Name\t\tRoll\n");
    printf("%s\t\t%d\n",s.name,s.roll);
}
