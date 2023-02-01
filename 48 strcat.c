#include<stdio.h>
#include<stdio.h>
void main()
{
    char name[10];
    char a[20];
    printf("enter first character:\n");
    scanf("%s",&name);
    printf("enter second character:\n");
    scanf("%s",&a);
    strcat(name,a);
    printf("value of the first string is: %s",name);


    //it concateness both string and returns
    // the value to the first string;

}

