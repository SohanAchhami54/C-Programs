#include<stdio.h>
 struct employee
{
    char name[20];
    int id;
};
void main()
{
   struct employee e;
   printf("Name of the employee:\t");
   scanf("%s",&e.name);
   printf("Id of the employee:\t");
   scanf("%d",&e.id);
   printf("The information of id is:\n");
   display(e.name,e.id);
}
void display(char ename[],int id)
{
    printf("Name\t\tID\n");
    printf("%s\t\t%d\n",ename,id);
}
