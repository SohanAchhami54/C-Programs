#include<stdio.h>
#define SIZE 100
struct employee
	{
	char name[20];
	float salary;
	};

void main()
{
struct employee e[SIZE];

int i;

float avg_sal=0;
for(i=0;i<2;i++)
	{
	printf("\nEnter information about employee%d",i+1);
	printf("\nName:\t");
	scanf(" %s", e[i].name);
	printf("\nSalary:\t");
	scanf("%f",&e[i].salary);
	//scanf("%f",&temp);
	//e[i].salary=temp;
	}
printf("\n\n");
printf("\n Employee name\t  Salary");
for(i=0;i<2;i++)
	printf("\n%s\t\t %f\n",e[i].name,e[i].salary);
for(i=0;i<2;i++)
	avg_sal=avg_sal+e[i].salary;
avg_sal=avg_sal/2;
printf("\nAverage Salaray=%f",avg_sal);

}

