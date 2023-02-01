#include<stdio.h>
struct student
{
    char name[20];
    float percent;
};
void main()
{
    struct student s[2];
    int i;
    float temp;
    for(i=0;i<2;i++)
    {
        printf("student details %d:\n",i+1);
        printf("student name:\t");
        scanf("%s",&s[i].name);
        printf("percentage:\n");
        scanf("%f",&s[i].percent);

    }
    printf("The Student Name whose percentage is greater than or equal to 60 are as follows:\n");
    for(i=0;i<2;i++)
    {
        if(s[i].percent>=60)
        {
            printf("%s\n",s[i].name);
        }
    }
}

