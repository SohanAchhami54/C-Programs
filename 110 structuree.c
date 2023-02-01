#include<stdio.h>
void main()
{
    struct booklist
    {
        float cost;
        char title[20];
        char author[20];

    };
    struct booklist s[4];
    int i;
    float sum=0;
    for(i=0;i<4;i++)
    {
        printf("Book details:%d\n",i+1);
        printf("book title:\t");
        scanf("%s",&s[i].title);
        printf("book author:\t");
        scanf("%s",&s[i].author);
        printf("book cost:\t");
        scanf("%f",&s[i].cost);
    }
    printf("The information of student is:\n");
    //printf("Title\t\tauthor\t\tcost\n");
  //  printf("\n\n");
    for(i=0;i<4;i++)
        printf("book title:%s\nbook author:%s\nbook cost:%f\n\n",s[i].title,s[i].author,s[i].cost);
       for(i=0;i<4;i++)
        sum=sum+s[i].cost;

       printf("\nthetotal cost of book is:%f",sum);
}
