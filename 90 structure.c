#include<stdio.h>
void main()
{
struct student
{
    char name[20];
    int roll;
    struct date
    {
        int day;
        int month
    }dateofbirthday;
}s;


    printf("name of student:\t");
    scanf("%s",&s.name);
    printf("roll of the student:\t");
    scanf("%d",&s.roll);
    printf("day of birthday:\t");
    scanf("%d",&s.dateofbirthday.day);
    printf("month of birthday:\t");
    scanf("%d",&s.dateofbirthday.month);

    printf("the details of the student is:\n");
    printf("name\t roll\t day\t month");
    printf("\n-----------------------\n");
    printf("%s\t %d\t %d\t %d\t",s.name,s.roll,s.dateofbirthday.day,s.dateofbirthday.month);
}

