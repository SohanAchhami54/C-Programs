//#include<stdio.h>
//struct student
//{
//    char name[20];
//    int roll;
//    float mark;
//};
//void main()
//{
//    struct student s,*b;
//    int i;
//    printf("Details of the student:\n");
//
//    {
//        printf("Details of %d student:\n",i+1);
//        printf("student name:\t");
//        scanf("%s",&s.name);
//        printf("student roll number:\t");
//        scanf("%d",&s.roll);
//        printf("student mark:\t");
//        scanf("%f",&s.mark);
//        b=&s;
//    }
//    printf("\n students details\n");
//    printf("studentname\troll\tmark");
//    printf("\n\n");
//   // for(i=0;i<2;i++)
//    printf("%s\t\t%d\t%f\n",b->name,b->roll,b->mark);
//
//}
//
//
#include<stdio.h>
struct student
{
    char name[20];
    int rollnumber;
    float mark;
};
void main()
{
    struct student s[3];
    int i;
    float avg=0;
    printf("the data of 3 students:\n");
    for(i=0;i<3;i++)
    {
        printf("Details %d:\n",i+1);
        printf("student name:\t");
        scanf("%s",&s[i].name);
        printf("student rollnumber:\t");
        scanf("%d",&s[i].rollnumber);
        printf("student mark:\t");
        scanf("%f",&s[i].mark);
    }
    printf("\n the details of students:\n");
    printf("\n====================================\n");
    printf("Name\t\troll number\tMark");
    printf("\n\n");
    for(i=0;i<3;i++)
    printf("%s\t\t%d\t\t%f\n",s[i].name,s[i].rollnumber,s[i].mark);
    for(i=0;i<3;i++)
        avg=avg+s[i].mark;
    avg=avg/3;
    printf("Average mark of the students is:%f",avg);
    printf("\n====================================\n");
}

