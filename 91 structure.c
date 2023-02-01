#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    struct book
    {
        char name[20];
        char author[20];
        char publisher[20];
    };
    int i;
    struct book b[2];
    printf("enter data of 2 book:\n");
    for(i=0;i<2;i++)
    {
        printf("book name:\t");
        gets(b[i].name);
        printf("book author:\t");
        gets(b[i].author);
        printf("book publisher:\t");
        gets(b[i].publisher);

    }
    printf("Book published by XYZ publication is:\n");
    for(i=0;i<2;i++)
    {
        if(strcmp(b[i].publisher,"XYZ")==0)
        {
            printf("%s\n",b[i].name);
        }
    }
}
