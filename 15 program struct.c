#include<stdio.h>
//#include<stdlib.h>
struct student
{
    int roll;
    float marks;
    char name[20];
};
void main()
{
    int i,n;
    printf(" enter the value of n:\n");
    scanf("%d",&n);
    struct student s[n];
    printf("enter the record:\n");


    for(i=0;i<n;i++)
    {
        printf("enter sroll: ");
        scanf("%d",&s[i].roll);
        printf("enter sname:");
        scanf("%s",&s[i].name);
        printf("enter smarks:");
        scanf("%f",&s[i].marks);
    }


        printf("\n the record of the student:\n\n");
    for (i=0;i<n;i++)
    {
        printf("roll of the student is:%d\n",s[i].roll);
        printf("name of the of the student:%s\n",s[i].name);
        printf("marks obtained by student in nepali is:%f\n",s[i].marks);
    }
}
