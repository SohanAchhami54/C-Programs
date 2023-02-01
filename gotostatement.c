#include<stdio.h>
void main()
{
    int totalmark;
    printf("enter the value of the mark\n");
    scanf("%d",&totalmark);
    if(totalmark>=50)
    {
        goto pass;
    }
    else if(totalmark<50)
    {
        goto fail;
    }
    pass:
        printf("congrates\n");

        fail:
            printf("better luck for next time\n");
}
