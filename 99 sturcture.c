#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float mark;
};
void main()
{
    struct student s,*b;
    int i;
    printf("Details of the student:\n");

    {
        printf("Details of %d student:\n",i+1);
        printf("student name:\t");
        scanf("%s",&s.name);
        printf("student roll number:\t");
        scanf("%d",&s.roll);
        printf("student mark:\t");
        scanf("%f",&s.mark);
        b=&s;
    }
    printf("\n students details\n");
    printf("studentname\troll\tmark");
    printf("\n\n");
   // for(i=0;i<2;i++)
    printf("%s\t\t%d\t%f\n",b->name,b->roll,b->mark);

}

