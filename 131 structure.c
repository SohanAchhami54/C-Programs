#include<stdio.h>
struct book
{
    char name[20];
    char author[20];
    char publisher[20];
};
void main()
{
    struct book b[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("book details %d:\n",i+1);
        printf("book name:\t");
        gets(b[i].name);
        printf("book author:\t");
        gets(b[i].author);
        printf("book publisher:\t");
        gets(b[i].publisher);
    }
    printf("\nBook published by XYZ publication are:\n");
    for(i=0;i<3;i++)
    {
        if(strcmp(b[i].publisher,"XYZ")==0)
        {
            printf("%s\t",b[i].name);
        }
    }

}
