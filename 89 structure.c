#include<stdio.h>
int i;
struct student
{
    char name[20];
    int roll;
};
void read(struct student s[])
{
    for(i=0;i<2;i++)
    {
        printf("name of student:\t");
        scanf("%s",&s[i].name);
        printf("roll of student:\t");
        scanf("%d",&s[i].roll);
    }
}
void display(struct student s[])
{
    printf("name\t\t roll\n");
    printf("\n");
    for(i=0;i<2;i++)
    printf("%s\t\t %d\n",s[i].name,s[i].roll);
}
void main()
{
    struct student s[2];
    printf("enter the details of students:\n");
    read(s);
    printf("the details of students:\n");
    display(s);
}
