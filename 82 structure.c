#include<stdio.h>
struct student
{
    char name[20];
    int credithour;
};
void main()
{
    int i;
    struct student s[2];
    for(i=0;i<2;i++)
    {
        printf("enter %d book details:\n",i+1);
        printf("student name:\t");
        scanf("%s",&s[i].name);
        printf("student credit hour:\n");
        scanf("%d",&s[i].credithour);
    }
        //s[i].credithour=temp;    }
    printf("book details:\n");
    {
        for(i=0;i<2;i++)
        {
            if(s[i].credithour>3)
            {
                printf("student name is:%s\n",s[i].name);
            }
        }
    }

}
