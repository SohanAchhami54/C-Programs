#include<stdio.h>
void main()
{
    char name[]="Sohan Achhami";
    int i=0;
    printf("the name of the user:\n");
    while (name[i]!='\0')
    {
        printf("%c\t",name[i]);
        i++;
    }
}
